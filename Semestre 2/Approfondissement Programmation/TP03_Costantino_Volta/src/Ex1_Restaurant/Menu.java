package Ex1_Restaurant;
import java.util.ArrayList;

public class Menu {
    private String nom;
    private int prix;
    private ArrayList<Plat> plats;

    public Menu(String nom, int prix){
        this.nom = nom;
        this.prix = prix;
        this.plats = new ArrayList<Plat>();
    }

    public void AjoutPlat(Plat p){
        if (this.plats.size() == 5){
            System.out.println("Il y a deja 5 plats dans le menu");
            return;
        }
        this.plats.add(p);
    }

    public void AfficherPlats(){
        for (Plat p: this.plats){
            System.out.println(p.GetNom() + " / " + p.GetTypePlat());
        }
    }

    public ArrayList<Plat> GetPlats(){
        return this.plats;
    }

    public String GetNom(){
        return this.nom;
    }

    public int GetPrix(){
        return this.prix;
    }
}
