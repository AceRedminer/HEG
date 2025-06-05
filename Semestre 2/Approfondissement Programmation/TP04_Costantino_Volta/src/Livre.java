import java.util.ArrayList;

public class Livre {
    private String titre;
    private String auteur;
    private int nbPage;
    private ArrayList<Recette> recettes = new ArrayList<>();

    public Livre(String titre, String auteur, int nbPage) {
        this.titre = titre;
        this.auteur = auteur;
        this.nbPage = nbPage;
    }

    public void ajoutRecette(Recette r){
            recettes.add(r);
    }

    // A développer
    public String getTitre(){
        return this.titre;
    }

    public String getAuteur(){
        return this.auteur;
    }

    public int getNbPages(){
        return this.nbPage;
    }

    public ArrayList<Recette> getRecettes(){
        return this.recettes;
    }
}

