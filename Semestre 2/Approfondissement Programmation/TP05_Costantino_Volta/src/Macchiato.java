public class Macchiato extends Boisson {
    String origine;
    int force;
    int lait;

    public Macchiato(String nom, double prix, int taille, String origine, int force, int lait) {
        super(nom, prix, taille);
        this.origine = origine;
        this.force = force;
        this.lait = lait;
    }

    public boolean contientLactose() {
        return lait > 0;
    }

    public String toString() {
        return nom + " (" + taille + "cl, " + prix + "€), origine: " + origine + ", force: " + force + ", lait: " + lait + (contientLactose() ? " [lactose]" : "");
    }
}
