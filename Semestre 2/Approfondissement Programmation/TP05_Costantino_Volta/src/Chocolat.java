public class Chocolat extends Boisson {
    String type;

    public Chocolat(String nom, double prix, int taille, String type) {
        super(nom, prix, taille);
        this.type = type;
    }

    public boolean contientLactose() {
        return !type.equalsIgnoreCase("noir");
    }

    public String toString() {
        return nom + " (" + taille + "cl, " + prix + "€), type: " + type + (contientLactose() ? " [lactose]" : "");
    }
}
