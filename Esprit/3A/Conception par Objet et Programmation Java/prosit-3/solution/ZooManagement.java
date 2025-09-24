public class ZooManagement {
  public static void main(String[] args) {
    Zoo zoo = new Zoo();

    // Instruction 10 test
    System.out.println(zoo.addAnimal(new Animal("esprit", "test2", 22, false)));
    System.out.println(zoo.addAnimal(new Animal("esprit", "test1", 23, true)));
    zoo.displayAnimals();

    // Instruction 11 test
    System.out.println(zoo.searchAnimal(new Animal("esprim", "test1", 23, true)));
    System.out.println(zoo.searchAnimal(new Animal("esprim", "none", 23, true)));

    // Instruction 13 test
    System.out.println(zoo.removeAnimal(new Animal("esprim", "test1", 23, true)));
    zoo.displayAnimals();
  }
} // Main class
