import javax.swing.*;
import java.util.*;

public class Test {
    // Variable "livres" permettant de stocker les livres
    private static ArrayList<Livre> livres = new ArrayList<>();
    private static final Map<String, Set<Recette>> planning = new LinkedHashMap<>();

    /**
     * Charger les données des livres à partir d'un fichier csv
     *
     * @param path
     */
    public static void chargerData(String path) {
        FileToStr fts = new FileToStr();
        String[] csvData = fts.lireCsv(path);
        String[] csvDataSplit = csvData[0].split(",");
        Livre livre = new Livre(csvDataSplit[0], csvDataSplit[1], Integer.parseInt(csvDataSplit[2]));
        boolean firstLine = true;
        for (String str : csvData) {
            if (firstLine) {
                firstLine = false;
                continue;
            }
            String[] recetteSplit = str.split(",");
            livre.ajoutRecette(new Recette(
                    recetteSplit[0],
                    Integer.parseInt(recetteSplit[1]),
                    Integer.parseInt(recetteSplit[2]),
                    Integer.parseInt(recetteSplit[3])
            ));
        }
        livres.add(livre);
    }

    public static void main(String[] args) {
        chargerData("src/Ressources/livre1.csv");
        chargerData("src/Ressources/livre2.csv");

        // Methodes à developper
        afficherLivres();
        genererPlanning();
        afficherPlanning();
        System.out.println("");
        rechercheRecette(new Recette("Jaret de porc",10,2,60));
        rechercheRecette(new Recette("Jaret de boeuf",10,2,60));
        rechercheRecettePlanning(new Recette("Jaret de porc",10,2,60));

    }

    public static void afficherLivres() {
        for (Livre l : livres) {
            System.out.println("\"" + l.getTitre() + "\" de " + l.getAuteur() + "(" + l.getNbPages() + " pages) contient les recettes : ");
            for (Recette r : l.getRecettes()) {
                System.out.println("\t" + r.getNom() + " (Page " + r.getPage() + ") pour " + r.getNbPersonnes() + " personnes. Durée de la recette : " + r.getTemps() + " minutes.");
            }
            System.out.println();
        }
    }

    public static void genererPlanning() {
            String[] jours = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};

            List<Recette> recettes = new ArrayList<>();
            for (Livre livre : livres) {
                recettes.addAll(livre.getRecettes());
            }

            // Mélanger les recettes pour avoir un ordre aléatoire
            Collections.shuffle(recettes);

            Random random = new Random();
            for (String jour : jours) {
                Set<Recette> recettesDuJour = new HashSet<>();

                while (recettesDuJour.size() < 2) {
                    Recette recette = recettes.get(random.nextInt(recettes.size()));
                    recettesDuJour.add(recette);
                }

                planning.put(jour, recettesDuJour);
            }
        }

        public static void afficherPlanning() {
            for (Map.Entry<String, Set<Recette>> entry : planning.entrySet()) {
                String jour = entry.getKey();
                Set<Recette> recettes = entry.getValue();
                System.out.print(jour + " : ");
                for (Recette r : recettes){
                    System.out.print(r.getNom() + " " + r.getPage() + " " + r.getTemps() + " " + r.getNbPersonnes() + ", ");
                }
                System.out.println();
            }
        }

    public static void rechercheRecette(Recette r) {
        boolean trouve = false;

        for (Livre livre : livres) {
            if (livre.getRecettes().contains(r)) {
                System.out.println("La recette \"" + r.getNom() + "\" se trouve dans le livre :");
                System.out.println("\"" + livre.getTitre() + "\" de " + livre.getAuteur());
                trouve = true;
            }
        }

        if (!trouve) {
            System.out.println("La recette \"" + r.getNom() + "\" n'a pas été trouvée dans les livres disponibles.");
        }
    }

    public static void rechercheRecettePlanning(Recette r) {
        boolean trouve = false;

        for (Map.Entry<String, Set<Recette>> entry : planning.entrySet()) {
            if (entry.getValue().contains(r)) {
                System.out.println("La recette \"" + r.getNom() + "\" est prévue le " + entry.getKey() + ".");
                trouve = true;
            }
        }

        if (!trouve) {
            System.out.println("La recette \"" + r.getNom() + "\" n'est pas prévue dans le planning actuel.");
        }
    }
    }
