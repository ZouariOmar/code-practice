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
    // Instruction 25 ==> See `zoo/Zoo.java`

    // Instruction 26 ==> See `zoo/Zoo.java`
    Zoo zoo = new Zoo();
    zoo.addAquaticAnimal(new DolphinAquaticAnimal(":)", "dophi", 99, true, "inhabit :°", 30));
    zoo.addAquaticAnimal(new DolphinAquaticAnimal(":)", "dophi1", 99, true, "inhabit :°", 40));
    zoo.addAquaticAnimal(new PenguinAquaticAnimal(":^", "PINGU", 66, false, "inhabit :°", 300));
    zoo.addAquaticAnimal(new PenguinAquaticAnimal(":^", "PINGU1", 66, false, "inhabit :°", 400));

    // Instruction 27
    // Que remarquez-vous ?
    // > `PINGU` show "This aquatic animal is swimming."
    AquaticAnimal[] aquaticAnimals = zoo.getAquaticAnimals();
    for (int i = 0; i < 2; ++i)
      aquaticAnimals[i].swim();

    // Instruction 28
    // So, the best solution is to modify the `AquaticAnimal`/`swim()` class/method
    // into abstract class/method
    // See `animal/{Animal.java, PenguinAquaticAnimal.java}

    // Instruction 29
    // See `zoo/Zoo.java`
    System.out.println(zoo.maxPenguinSwimmingDepth());

    // Instruction 30
    // See `zoo/Zoo.java`
    zoo.displayNumberOfAquaticsByType();

    // Instruction 31
    // See `animal/AquaticAnimal.java`
    System.out.println(new DolphinAquaticAnimal(":)", "dophi", 99, true, "inhabit :°", 30)
        .equals(new DolphinAquaticAnimal(":)", "dophi", 99, true, "inhab", 30)));
  }
} // ZooManagement class

// [INFO] If you have java25.*.*, you can use instead:
// ```java
// void main() {
// zoo.addAquaticAnimal(new DolphinAquaticAnimal(":)", "dophi", 99, true,
// "inhabit :°", 30));
// zoo.addAquaticAnimal(new DolphinAquaticAnimal(":)", "dophi1", 99, true,
// "inhabit :°", 40));
// zoo.addAquaticAnimal(new PenguinAquaticAnimal(":^", "PINGU", 66, false,
// "inhabit :°", 300));
// zoo.addAquaticAnimal(new PenguinAquaticAnimal(":^", "PINGU1", 66, false,
// "inhabit :°", 400));
//
// AquaticAnimal[] aquaticAnimals = zoo.getAquaticAnimals();
// for (int i = 0; i < 2; ++i)
// aquaticAnimals[i].swim();
//
//
// System.out.println(zoo.maxPenguinSwimmingDepth());
//
// zoo.displayNumberOfAquaticsByType();
//
// System.out.println(new DolphinAquaticAnimal(":)", "dophi", 99, true, "inhabit
// :°", 30)
// .equals(new DolphinAquaticAnimal(":)", "dophi", 99, true, "inhab", 30)));
// }
// ```
