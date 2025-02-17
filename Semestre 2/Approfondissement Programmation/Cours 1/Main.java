public class Main {

  static Car car1 = new Car();

  public static void main(String[] args) {
    car1.demarrer();
    car1.avancer(); 
    printHelloWorld(args);
  }

  public static void printHelloWorld(String[] args){
    System.out.println(args[0]);;
  }
}