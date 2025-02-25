package Exercice1;

public class Entreprise {

    private String nom;
    private String addresse;
    private String type;
    private int nombreBatiments;
    private String domaine;
    private int nombreEmployes;
    private String detenteurMajoritaire;

    Entreprise() {
        this.nom = "VITC";
        this.addresse = "Levant";
        this.type = "Privée";
        this.nombreBatiments = 0;
        this.nombreEmployes = 0;
        this.domaine = "Informatique";
        this.detenteurMajoritaire = "Costi";
    }

    void modifierNbBatiments(int newNbBatiments){
        if (newNbBatiments >= 0)
            this.nombreBatiments = newNbBatiments;
    }

    void modifierNbEmployes(int newNbEmployes){
        if (newNbEmployes >= 0)
            this.nombreEmployes = newNbEmployes;
    }

    void affichageComplet() {
        System.out.println(this.nom);
        System.out.println(this.addresse);
        System.out.println("Entreprise " + this.type + " détenue par " + this.detenteurMajoritaire + " dans le domaine " + this.domaine);
        System.out.println("L'entreprise possède " + this.nombreBatiments + " batiments pour " + this.nombreEmployes + " employés");
    }

    void affichagePartiel(){
        System.out.println("Nom " + this.nom + " adresse " + this.addresse);
    }

    void modifierTypeEntreprise(String newType){
        if(!newType.isEmpty())
            this.type = newType;
        if (newType.equals("Publique")){
            this.detenteurMajoritaire = "Etat";
        }
    }
}
