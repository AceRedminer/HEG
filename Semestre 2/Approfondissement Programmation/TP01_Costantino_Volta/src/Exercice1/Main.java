package Exercice1;

public class Main {

    public static void main(String[] args) {
        Entreprise ent = new Entreprise();
        ent.modifierNbBatiments(5);
        ent.modifierNbEmployes(15);
        ent.affichageComplet();
        ent.affichagePartiel();
        ent.modifierTypeEntreprise("Publique");
        ent.affichageComplet();

        System.out.println("-----------------------------------");

        Employe emp = new Employe();
        emp.modifierAdresse("La");
        emp.modifierAnneeEntreprise(8);
        emp.calculBonus();
        emp.afficherInfos();
    }

}
