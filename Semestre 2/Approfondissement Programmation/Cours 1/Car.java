  public class Car {
    static int poids;
    float vitesse;
    static String nom;

    public Car(String _nom){
      poids = 50;
      vitesse = 0;
      nom = _nom;
    }
    
    public static void main(String[] args) {
      System.out.println(poids);
    }

    void avancer() {
        System.out.println("Avancer");
    }

    void demarrer(){
      System.out.println("Demarrer");
    }

    float vitesseActuelle() {
      return vitesse;
    }

    void modifVitesse(float newVitesse){
      this.vitesse = newVitesse;
    }
}