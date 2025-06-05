public abstract class Boisson {
    String nom;
    double prix;
    int taille;

    public Boisson(String nom, double prix, int taille) {
        this.nom = nom;
        this.prix = prix;
        this.taille = taille;
    }

    public abstract boolean contientLactose();

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (!(o instanceof Boisson)) return false;
        return nom.equals(((Boisson) o).nom);
    }

    @Override
    public int hashCode() {
        return nom.hashCode();
    }
}
