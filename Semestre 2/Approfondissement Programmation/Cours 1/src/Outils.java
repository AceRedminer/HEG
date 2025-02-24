public class Outils {
    void compareVitesse(Car car1, Car car2) {
        if (car1.vitesse < car2.vitesse) {
            System.out.println(car2.nom + " est plus rapide");
        } else {
            System.out.println(car1.nom + " est plus rapide");
        }
    }
}
