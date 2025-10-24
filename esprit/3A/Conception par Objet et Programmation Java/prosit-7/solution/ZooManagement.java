/**
 * ZooManagement.java
 *
 * ZooManagement java class
 *
 * <p>Main class (have the entry-point)</p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 11/10/2025
 *
 * <a href="https://github.com/ZouariOmar/code-practice/tree/main/esprit/3A/Conception%20par%20Objet%20et%20Programmation%20Java/prosit-5/solution/ZooManagement.java">
 *  ZooManagement.java
 * </a>
 *
 * <a href="https://openjdk.org/jeps/512">
 *  JEP 512: Compact Source Files and Instance Main
 * </a>
 */

// * Imports
import animal.*;
import zoo.Zoo;

public class ZooManagement {
  public static void main(String[] args) {
    Zoo zoo = new Zoo();

    // Instruction 32 ==> @see zoo.Zoo#addAnimal(final Animal);

    // Instruction 33.1 ==> @see zoo.ZooFullException && @see
    // Instruction 33.2 ==> @see zoo.Zoo#addAnimal(final Animal)
    // Instruction 33.3
    // zoo.addAnimal(new Animal("none", "test", 99, true));
    // zoo.addAnimal(new Animal("none", "testa", 99, true));
    // zoo.addAnimal(new Animal("none", "testa", 99, true));
    // zoo.addAnimal(new Animal("none", "testb", 99, true));
    // zoo.addAnimal(new Animal("none", "testc", 99, true));

    // Instruction 34
    try {
      zoo.addAnimal(new Animal("none", "test", 99, true));
      zoo.addAnimal(new Animal("none", "testa", 99, true));
      zoo.addAnimal(new Animal("none", "testa", 99, true));
      zoo.addAnimal(new Animal("none", "testc", 99, true));
      zoo.addAnimal(new Animal("none", "testc", 99, true));
      zoo.addAnimal(new Animal("none", "testc", -99, true));
    } catch (final InvalidAgeException e) {
      System.err.println(e.getMessage());
    }

    zoo.displayAnimals();
  }
} // ZooManagement class

// [INFO] If you have java25.*.*, you can use instead:
// ```java
// Zoo zoo = new Zoo();
//
// // Instruction 32 ==> @see zoo.Zoo#addAnimal(final Animal);
//
// // Instruction 33.1 ==> @see zoo.ZooFullException && @see
// // Instruction 33.2 ==> @see zoo.Zoo#addAnimal(final Animal)
// // Instruction 33.3
// // zoo.addAnimal(new Animal("none", "test", 99, true));
// // zoo.addAnimal(new Animal("none", "testa", 99, true));
// // zoo.addAnimal(new Animal("none", "testa", 99, true));
// // zoo.addAnimal(new Animal("none", "testb", 99, true));
// // zoo.addAnimal(new Animal("none", "testc", 99, true));
//
// // Instruction 34
// try {
// zoo.addAnimal(new Animal("none", "test", 99, true));
// zoo.addAnimal(new Animal("none", "testa", 99, true));
// zoo.addAnimal(new Animal("none", "testa", 99, true));
// zoo.addAnimal(new Animal("none", "testc", 99, true));
// zoo.addAnimal(new Animal("none", "testc", 99, true));
// zoo.addAnimal(new Animal("none", "testc", -99, true));
// } catch (final InvalidAgeException e) {
// System.err.println(e.getMessage());
// }
//
// zoo.displayAnimals();
// ```
