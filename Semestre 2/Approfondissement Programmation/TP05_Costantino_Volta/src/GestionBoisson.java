import java.io.File;
import java.util.*;

public class GestionBoisson {
    Map<Boisson, Integer> stock = new HashMap<>();

    void chargerData(String chemin) {
        String[] lignes = FileToStr.lireCsv(chemin);
        for (String ligne : lignes) {
            String[] champs = ligne.split(";");
            int quantite = Integer.parseInt(champs[0]);
            String nom = champs[1];
            double prix = Double.parseDouble(champs[2]);
            int taille = Integer.parseInt(champs[3]);

            Boisson b;
            if (nom.equalsIgnoreCase("Chocolat")) {
                b = new Chocolat(nom, prix, taille, champs[4]);
            } else if (nom.equalsIgnoreCase("Macchiato")) {
                b = new Macchiato(nom, prix, taille, champs[4], Integer.parseInt(champs[5]), Integer.parseInt(champs[6]));
            } else {
                b = new Cafe(nom, prix, taille, champs[4], Integer.parseInt(champs[5]), Integer.parseInt(champs[6]));
            }

            stock.put(b, quantite);
        }
    }

    void afficherStock() {
        for (Boisson b : stock.keySet()) {
            int qte = stock.get(b);
            if (qte < 2) {
                System.out.println("[Stock bas] " + b + " - Quantité: " + qte);
            } else {
                System.out.println(b + " - Quantité: " + qte);
            }
        }
    }

    void servirProduit(Boisson demande) {
        for (Boisson b : stock.keySet()) {
            if (b.equals(demande)) {
                int qte = stock.get(b);
                if (qte > 0) {
                    stock.put(b, qte - 1);
                    System.out.println("Servi: " + b.nom);
                } else {
                    System.out.println("Rupture de stock pour: " + b.nom);
                }
                return;
            }
        }
        System.out.println("Produit non trouvé: " + demande.nom);
    }

    public static void main(String[] args){
        GestionBoisson gB = new GestionBoisson();
        String localDir = System.getProperty("user.dir");


         gB.chargerData(localDir + File.separator +"src"+ File.separator +"stock.csv");
         System.out.println("------ Affichage du Stock ------- \n");
         gB.afficherStock();
         System.out.println();
         System.out.println("------ Ventes de produits ------- \n");
         Boisson b = new Chocolat("Chocolat",1.5, 25,"au lait");
         gB.servirProduit(b);
         gB.servirProduit(b);
         gB.servirProduit(b);
         System.out.println();
         System.out.println("------ Affichage du Stock ------- \n");
         gB.afficherStock();

    }
}
