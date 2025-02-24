public class Main {

    public static void main(String[] args) {
        Car car1 = new Car("Ma voiture");
        car1.demarrer();
        car1.avancer();
        System.out.println(car1.poids);

        car1.vitesse = 20f;
        float vitesseAct = car1.vitesseActuelle();
        System.out.println(vitesseAct);

        car1.modifVitesse(30f);
        vitesseAct = car1.vitesseActuelle();
        System.out.println(vitesseAct);

        Car car2 = new Car("Ta voiture");
        car2.modifVitesse(60f);
        float vitesse2 = car2.vitesseActuelle();
        System.out.println(vitesse2);

        Outils outils = new Outils();
        outils.compareVitesse(car1, car2);
    }
}