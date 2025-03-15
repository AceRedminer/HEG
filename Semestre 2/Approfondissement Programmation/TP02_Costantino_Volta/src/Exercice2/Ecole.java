package Exercice2;

import java.util.Objects;

public class Ecole {
    String nom;
    String adresse;
    String type;
    int nbBatiments;
    String degre;
    String domaine;
    int nbEtudiants;

    public Ecole(String nom, String adresse, String type, int nbBatiments, String degre, String domaine, int nbEtudiants){
        this.nom = nom;
        this.adresse = adresse;
        this.type = type;
        this.nbBatiments = nbBatiments;
        this.degre = degre;
        this.domaine = domaine;
        this.nbEtudiants = nbEtudiants;
    }

    public void setNbBatiments(int nbBatiments){
        this.nbBatiments = nbBatiments;
    }

    public void setNbEtudiants(int nbEtudiants){
        this.nbEtudiants = nbEtudiants;
    }

    @Override
    public String toString() {
        return nom + ", " + adresse + "\n" +
                "Ecole " + type + " de degré " + degre + " dans le domaine " + domaine + "\n" +
                "Il y a " + nbBatiments + " bâtiments pour " + nbEtudiants + " étudiants";
    }

    public boolean equals(Ecole e) {
        if (this.nom == e.nom && this.adresse == e.adresse) {
            if (this.type == "Privé" && e.type == "Privé" && this.domaine != e.domaine) {
                return false;
            }
            return true;
        }else{
            return false;
        }
    }

    public void setDegre (String degre, String domaine){
        this.degre = degre;
        if (this.type == "Publique"){
            if (degre == "Primaire" || degre == "C.O."){
                this.domaine = "Général";
            }else {
                this.domaine = domaine;
            }
        }
    }
}
