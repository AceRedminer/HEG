package Exercice2;
public class Main {
    public static void main(String[] args)
    {
        Ecole e1 = new Ecole("Haute école de gestion", "Route de drize 19", "Publique",5,"Tertiaire","Gestion",1500);
        Ecole e2 = new Ecole("Schultz", "Route du lac 29", "Privé",2,"Secondaire","Général",200);
        Ecole e3 = new Ecole("Collège Saint-Louis", "Route de Corzier 23", "Privé",3,"Secondaire","Général",400);
        Ecole e4 = new Ecole("Collège Saint-Louis", "Route de Corzier 23", "Privé",1,"Secondaire","Mathématique",50);
        Ecole e5 = new Ecole("Collège de Carouge", "Route des centenaires 34", "Publique",4,"Secondaire","Général",1500);
        Ecole e6 = new Ecole("Collège de Carouge", "Route des centenaires 34", "Publique",4,"Secondaire","Général",500);

        System.out.println("Affichage des écoles");
        System.out.println("---------------------------------------------");
        System.out.println(e1.toString());
        System.out.println(e2.toString());
        System.out.println(e3.toString());
        System.out.println(e4.toString());
        System.out.println(e5.toString());
        System.out.println(e6.toString());
        System.out.println("");
        System.out.println("Test des égalités entre écoles");
        System.out.println("---------------------------------------------");
        if (e3.equals(e4)==false)
        {
            System.out.println(e3.toString());
            System.out.println("-------------- n'est pas égal à --------------");
            System.out.println(e4.toString());
            System.out.println("");
            System.out.println("");
        }
        else
        {
            System.out.println(e3.toString());
            System.out.println("-------------- est égal à --------------");
            System.out.println(e4.toString());
            System.out.println("");
            System.out.println("");
        }

        if (e5.equals(e6)==false)
        {
            System.out.println(e5.toString());
            System.out.println("-------------- n'est pas égal à --------------");
            System.out.println(e6.toString());
            System.out.println("");
            System.out.println("");
        }
        else
        {
            System.out.println(e5.toString());
            System.out.println("-------------- est égal à --------------");
            System.out.println(e6.toString());
            System.out.println("");
            System.out.println("");
        }

        //------------------------------------------------------------------------------

        //Rajoutez vos instances de Personne pour réaliser vos différents tests

        Personne p1 = new Personne("Toi", "Moi", e1);
        Personne p2 = new Personne("Vous", "Nous", e2);

        System.out.println(p1.toString());
        System.out.println(p2.toString());
        System.out.println("-----");
        p1.nomEcole();
        p2.nomEcole();
        System.out.println("-----");
        p1.infoEcole();
        p2.infoEcole();

    }
}