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

public class ZooManagement {
  public static void main(String[] args) {
    // Instruction 20 ==> see animal/*

    // Instruction 21
    Animal dummy = new Animal();
    AquaticAnimal aquaticDummy = new AquaticAnimal();
    DolphinAquaticAnimal dolphinAquaticDummy = new DolphinAquaticAnimal();
    PenguinAquaticAnimal penguinAquaticAnimalDummy = new PenguinAquaticAnimal();
    TerrestrialAnimal terrestrialAnimalDummy = new TerrestrialAnimal();

    // Instruction 22 ==> see animal/*
    // Que remarquez-vous, au niveau de la méthode main ?
    // > :)

    // Instruction 23 see animal/*
    System.out.printf(
        "dummy: %s\naquaticDummy: %s\ndolphinAquaticDummy: %s\npenguinAquaticAnimalDummy: %s\nterrestrialAnimalDummy: %s\n",
        dummy,
        aquaticDummy,
        dolphinAquaticDummy,
        penguinAquaticAnimalDummy,
        terrestrialAnimalDummy);

    // Instruction 24
    // `aquaticDummy` use AquaticAnimal#swim() ----------------------- Public method
    // `dolphinAquaticDummy` use his own DolphinAquaticAnimal#swim() - Overriding
    // `terrestrialAnimalDummy` use the inherited AquaticAnimal#swim()
    aquaticDummy.swim();
    dolphinAquaticDummy.swim();
    penguinAquaticAnimalDummy.swim();
  }
} // ZooManagement class

// [INFO] If you have java25.*.*, you can use instead:
// ```java
// void main() {
// Animal dummy = new Animal();
// AquaticAnimal aquaticDummy = new AquaticAnimal();
// DolphinAquaticAnimal dolphinAquaticDummy = new DolphinAquaticAnimal();
// PenguinAquaticAnimal penguinAquaticAnimalDummy = new PenguinAquaticAnimal();
// TerrestrialAnimal terrestrialAnimalDummy = new TerrestrialAnimal();
//
// System.out.printf(
// "dummy: %s\naquaticDummy: %s\ndolphinAquaticDummy:
// %s\npenguinAquaticAnimalDummy: %s\nterrestrialAnimalDummy: %s\n",
// dummy,
// aquaticDummy,
// dolphinAquaticDummy,
// penguinAquaticAnimalDummy,
// terrestrialAnimalDummy);
//
// aquaticDummy.swim();
// dolphinAquaticDummy.swim();
// penguinAquaticAnimalDummy.swim();
// }
// ```
