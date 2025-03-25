package Ex1_Restaurant;

import java.util.ArrayList;

public class Restaurant
{
    /**
     * Cette classe restaurant sert principalement de test pour l'exercice 1
     * et simule le fonctionnement d'une classe "Main" : Pour pouvoir tester votre
     * code, il suffit juste de décommenter.
     */

    private static ArrayList<Menu> menuPlat = new ArrayList<Menu>();

    public static void main(String[] args)
    {
        Plat p1 = new Plat("Cassoulet", "Plat");
        Plat p2 = new Plat("Pâtes au saumon", "Plat");
        Plat p3 = new Plat("Salade verte", "Entrée");
        Plat p4 = new Plat("Assiette Valaisanne", "Entrée/Plat");
        Plat p5 = new Plat("Coupe Danemark", "Dessert");
        Plat p6 = new Plat("Quiche Lorraine", "Plat");
        Plat p7 = new Plat("Pizza 4 saisons", "Plat");
        Plat p8 = new Plat("Tartare d'aubergines", "Entrée");
        Plat p9 = new Plat("Salade Niçoise", "Entrée/Plat");
        Plat p10 = new Plat("Profiteroles", "Dessert");

        Menu m1 = new Menu("du jour", 35);
        Menu m2 = new Menu("de saison", 40);
        Menu m3 = new Menu("duo", 60);
        Menu m4 = new Menu("enfant", 25);
        Menu m5 = new Menu("découverte", 45);

        m1.AjoutPlat(p1);
        m1.AjoutPlat(p2);
        m1.AjoutPlat(p5);
        m1.AjoutPlat(p3);
        m1.AjoutPlat(p10);
        m1.AjoutPlat(p9);
        menuPlat.add(m1);
        m2.AjoutPlat(p1);
        m2.AjoutPlat(p2);
        m5.AjoutPlat(p6);
        m3.AjoutPlat(p2);
        m3.AjoutPlat(p3);
        m4.AjoutPlat(p1);
        menuPlat.add(m2);
        Recherche(p6);
        Recherche(p1);
    }

    public static void Recherche(Plat px){
        boolean exist = false;
        System.out.println("Recherche de " + px.GetNom());
        for (Menu m: menuPlat){
            for (Plat p: m.GetPlats()){
                if (p.GetNom() == px.GetNom()){
                    System.out.println("Le plat " + px.GetNom() + " (" + px.GetTypePlat() + ") se trouve dans le Menu " + m.GetNom() + " à " + m.GetPrix() + "chf composé de :");
                    m.AfficherPlats();
                    exist = true;
                }
            }
        }
        if (!exist){
            System.out.println(px.GetNom() + " n'est dans aucun menu");
        }
    }

}