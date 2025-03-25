package Ex2_CoursesSki.Domaine;

public class Resultat {
    private int noDossard;
    private double temps;

    public Resultat(int noDossard, double temps) {
        this.noDossard = noDossard;
        this.temps = temps;
    }

    public int getNoDossard(){
        return this.noDossard;
    }

    public double getTemps(){
        return this.temps;
    }
}
