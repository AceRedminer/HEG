public class Cafe extends Boisson {
    String origine;
    int force;
    int creme;

    public Cafe(String nom, double prix, int taille, String origine, int force, int creme) {
        super(nom, prix, taille);
        this.origine = origine;
        this.force = force;
        this.creme = creme;
    }

    public boolean contientLactose() {
        return creme > 0;
    }

    public String toString() {
        return nom + " (" + taille + "cl, " + prix + "€), origine: " + origine + ", force: " + force + ", crème: " + creme + (contientLactose() ? " [lactose]" : "");
    }
}
