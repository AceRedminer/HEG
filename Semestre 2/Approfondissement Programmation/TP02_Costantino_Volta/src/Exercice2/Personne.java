package Exercice2;

public class Personne {
    String nom;
    String prenom;
    Ecole ecole;

    public Personne(String nom, String prenom, Ecole e){
        this.nom = nom;
        this.prenom = prenom;
        this.ecole = e;
    }
    public void nomEcole() {
        System.out.println("Nom de l'école : " + ecole.nom);
    }

    // Method to display school details
    public void infoEcole() {
        System.out.println(ecole.toString());
    }

    // toString method
    @Override
    public String toString() {
        String infoPersonne = nom + " " + prenom + "\n";
        String infoEcole;

        if (ecole.type.equals("Publique")) {
            if (ecole.degre.equals("Tertiaire")) {
                infoEcole = "Étudiant de niveau tertiaire :\n" + ecole.toString();
            } else {
                infoEcole = "École publique :\n" + ecole.toString();
            }
        } else {
            infoEcole = "École privée : " + ecole.nom;
        }

        return infoPersonne + infoEcole;
    }
}
