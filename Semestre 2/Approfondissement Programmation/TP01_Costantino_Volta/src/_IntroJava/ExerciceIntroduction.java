package _IntroJava;
import java.util.ArrayList;
/**
 * Exercices d'introduction pour tester les bases de Java.
 * Les différentes methodes présentes dans ce fichier sont executées dans la méthode main de la classe Main.
 */
public class ExerciceIntroduction {

    /**
     * Exercice 1: variables et conversions
     * - Déclarer une variable entière, une variable double, et une variable caractère (String).
     * - Afficher les valeurs de ces variables.
     * - Réaliser et afficher la conversion d'une variable entière en double.
     * - Réaliser et afficher la conversion d'une variable double en entière.
     * - Additionner les trois variables et afficher le résultat.
     */
    public static void testerVariablesEtConversions() {
        System.out.println("Tester Variables et Conversions");

        int a = 5;
        double b = 12.5;
        String c = "Costi";

        System.out.println(a + " " + b + " " + c);

        int a_c = (int)b;
        double b_c = (double)a;
        System.out.println(a_c + " " + b_c);

        System.out.println(a_c + b_c + c);
    }

    /**
     * Exercice 2: Conditions
     * - Utilisez la fonction suivante qui prend un entier en paramètre.
     * - Utiliser une structure conditionnelle pour tester si l'entier est positif, négatif ou zéro.
     * - retourner "positif", "négatif", ou "zéro" selon le cas.
     */
    public static String testerLesConditions(int nombre) {
        System.out.println("Tester les conversions");

        if (nombre < 0){
            return "négatif";
        } else if (nombre == 0){
            return "zéro";
        } else {
            return "positif";
        }
    }

    /**
     * Exercice 3: Boucles
     * - Utiliser une boucle for pour afficher les nombres de 1 à 5.
     * - Utiliser une boucle while pour réaliser un décompte à partir de 5 jusqu'à 1.
     */
    public static void testerLesBoucles() {
        System.out.println("Tester les boucles");

        for (int i = 1; i <= 5; i++){
            System.out.print(i + " ");
        }

        System.out.println();

        int i = 5;
        while (i != 0){
            System.out.println(i);
            i--;
        }
    }

    /**
     * Exercice 4: Manipuler les tableaux
     * - Déclarer et initialiser un tableau d'entiers avec des valeurs.
     * - Utiliser une boucle pour afficher tous les éléments du tableau.
     * - Calculer et afficher la somme des éléments du tableau.
     *
     * Il faut utiliser les tableaux en java et non pas les listes (ArrayList) qui
     * sont abordés dans la prochaine méthode
     */
    public static void testerLesTableaux() {
        System.out.println("Tester les tableaux");

        int[] tab = {1, 2, 3, 4, 5};

        int somme = 0;

        for (int i = 0; i < tab.length; i++){
            System.out.println(tab[i]);
            somme += tab[i];
        }

        System.out.println("Somme = " + somme);
    }


    /**
     * Exercice 5 : Manipuler les listes
     * - Créer une liste d'entiers et ajouter des valeurs.
     * - Utiliser une boucle pour afficher tous les éléments de la liste.
     * - Calculer et afficher la somme des éléments de la liste.
     *
     * Pour creer une arrayList, il faut importer la classe java.util.ArrayList, et utiliser la syntaxe suivante:
     * ArrayList<Integer> liste = new ArrayList<>();
     */
    public static void testerLesListes(){
        System.out.println("Tester les listes");

        ArrayList<Integer> liste = new ArrayList<>();
        for (int i = 0; i <= 5; i++){
            liste.add(i);
        }

        System.out.println(liste.toString());

        int somme = 0;

        for (int i = 0; i < liste.size(); i++){
            somme += liste.get(i);
        }

        System.out.println("Somme = " + somme);
    }

}
