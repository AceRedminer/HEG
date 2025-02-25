package Exercice1;

public class Employe {

    String nom;
    String prenom;
    String adresse;
    String fonction;
    int anneeDansEntreprise;
    double salaireMensuel;

    Employe(){
        this.nom = "Liddell";
        this.prenom = "Alice";
        this.adresse = "ici";
        this.fonction = "Responsable IT";
        this.anneeDansEntreprise = 5;
        this.salaireMensuel = 6750.50;
    }

    void modifierAdresse(String newAdresse){
        if (!newAdresse.isEmpty()) {
            this.adresse = newAdresse;
        }
    }

    void modifierAnneeEntreprise(int nbAnneeEntreprise){
        if (nbAnneeEntreprise >= this.anneeDansEntreprise){
            this.anneeDansEntreprise = nbAnneeEntreprise;
        }
    }

    double calculBonus(){
        return (this.salaireMensuel + (((double) this.anneeDansEntreprise / 100) * this.salaireMensuel));
    }

    void afficherInfos(){
        System.out.println(this.nom + " " + this.prenom + ", " + this.adresse + ", " + this.fonction);
        System.out.println(this.anneeDansEntreprise + " années dans l'entreprise. Salaire = " + calculBonus() + "CHF par mois, " + this.salaireMensuel + "CHF sans bonus");
    }
}
