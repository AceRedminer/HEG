package Ex1_Restaurant;

public class Plat {
    private String nom;
    private String typePlat;

    public Plat(String nom, String typePlat){
        this.nom = nom;
        this.typePlat = typePlat;
    }

    public String GetNom(){
        return this.nom;
    }

    public String GetTypePlat(){
        return this.typePlat;
    }
}
