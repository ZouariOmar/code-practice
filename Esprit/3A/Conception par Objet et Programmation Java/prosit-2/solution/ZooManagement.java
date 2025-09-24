public class ZooManagement {
  public static void main(String[] args) {
    // Instruction 5 -> 7
    // @see Animal.java
    // @see Zoo.java
    Animal lion = new Animal("lion", "test1", 22, true);
    Animal tiger = new Animal("tiger", "test0", 33, false);
    Animal bug = new Animal("bug", "test33", 2, false);
    Zoo myZoo = new Zoo(new Animal[] { lion, tiger, bug }, "None", "none", 31);

    // Instruction 8
    myZoo.displayZoo();

    // Instruction 9
    System.out.println(myZoo); // Try this with/out toString overload
    System.out.println(bug);
  }
}
