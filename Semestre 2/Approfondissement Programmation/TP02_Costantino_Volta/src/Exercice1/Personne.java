package Exercice1;

public class Personne {
    String nom;
    String prenom;
    String adresse;
    int age;
    Voiture voit;
    Maison mais;

    public Personne(String nom, String prenom, String adresse, int age){
        this.nom = nom;
        this.prenom = prenom;
        this.adresse = adresse;
        this.age = age;
        this.voit = null;
        this.mais = null;
    }

    public Personne(String nom, String prenom, String adresse, int age, Voiture v){
        this.nom = nom;
        this.prenom = prenom;
        this.adresse = adresse;
        this.age = age;
        this.voit = v;
        this.mais = null;
    }

    public Personne(String nom, String prenom, String adresse, int age, Maison m){
        this.nom = nom;
        this.prenom = prenom;
        this.adresse = adresse;
        this.age = age;
        this.voit = null;
        this.mais = m;
    }

    public Personne(String nom, String prenom, String adresse, int age, Voiture v, Maison m){
        this.nom = nom;
        this.prenom = prenom;
        this.adresse = adresse;
        this.age = age;
        this.voit = v;
        this.mais = m;
    }

    public void setVoiture(Voiture v){
        this.voit = v;
    }

    public void setMaison(Maison m){
        this.mais = m;
    }

    public String getPrenom(){
        return  this.prenom;
    }

    public String afficher() {
        String infos = nom + " " + prenom + " (" + age + "), " + adresse + "\n";
        String possessions = "";

        if (voit == null && mais == null) {
            possessions = "Aucunes possessions";
        } else {
            if (voit != null) {
                possessions += voit.marque + " " + voit.modele + " de " + voit.annee + ". ";
            }
            if (mais != null) {
                possessions += "Maison d'une surface de " + mais.surface + "m2 comportant " + mais.nbPieces + " pièces. ";
                if (mais.location) {
                    possessions += "Le loyer est de " + mais.prix + " Chf mensuel";
                } else {
                    possessions += "Le prix est de " + mais.prix + " Chf";
                }
            }
        }

        return infos + possessions;
    }
}
