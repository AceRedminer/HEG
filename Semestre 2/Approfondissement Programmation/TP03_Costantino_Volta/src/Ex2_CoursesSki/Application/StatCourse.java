package Ex2_CoursesSki.Application;

import Ex2_CoursesSki.Domaine.Resultat;
import Ex2_CoursesSki.Donnees.Bdd;

import java.util.ArrayList;
import java.util.List;

/**
 * Cette classe ne contient pas de methode main, il faudra l'utiliser
 * dans la classe Main pour lancer la méthode principale
 */
public class StatCourse {

    //La liste des résultats
    private static List<Resultat> resultats;

    /**
     * Méthode principale qui lancera les autres afin d'afficher les statistiques de la course
     * Décommentez petit à petit afin de tester votre code
     */
    public static void afficherStats(){

        resultats = chargerResultats();

        afficherResultats(resultats);

        Resultat pRapide = plusRapide(resultats);
        System.out.println("Plus RAPIDE  : Dossard " + pRapide.getNoDossard() + " : "+ pRapide.getTemps());

        //Example avec le dossard 116
        nbFois(116);
    }

    public static List<Resultat> chargerResultats(){
        List<Resultat> resTmp = new ArrayList<Resultat>();
        int[] dossard = Bdd.recupererLesDossards();
        double[] temps = Bdd.recupererLesTemps();

        for(int i = 0; i < dossard.length; i++){
            Resultat res = new Resultat(dossard[i], temps[i]);
            resTmp.add(res);
        }

        return resTmp;
    }

    public static void afficherResultats(List<Resultat> resultats) {
        System.out.println("Résultats : ");
        for (Resultat res: resultats){
            System.out.println("Dossard " + res.getNoDossard() + " : " + res.getTemps());
        }
    }

    public static Resultat plusRapide(List<Resultat> resultats){
        Resultat pRapide = new Resultat(0, 99999);

        for(Resultat r: resultats){
            if (r.getTemps() < pRapide.getTemps()){
                pRapide = r;
            }
        }

        return pRapide;
    }

    public static void nbFois(int nbDossard){
        int count = 0;

        for(Resultat r: resultats){
            if (r.getNoDossard() == nbDossard){
                count++;
            }
        }
        if (count == 0){
            System.out.println("Le coureur n'a pas fais de courses");
        } else {
            System.out.println("Le " + nbDossard + " a fais " + count + " courses");
        }
    }
}
