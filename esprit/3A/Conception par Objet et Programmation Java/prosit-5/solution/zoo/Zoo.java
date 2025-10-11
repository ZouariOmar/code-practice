/**
 * Zoo.java
 *
 * Zoo java class
 *
 * <p>none</p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/10/2025
 *
 * <a href="https://github.com/ZouariOmar/code-practice/tree/main/esprit/3A/Conception%20par%20Objet%20et%20Programmation%20Java/prosit-5/solution/zoo/Zoo.java">
 *  Zoo.java
 * </a>
 */

// Zoo pkg name
package zoo;

// `animal` Imports
import animal.Animal;

public class Zoo {
  private final Animal[] animals;
  private final String name, city;
  private final int nbrCages;
  private int animalsLength; // Instruction 14

  public Zoo() {
    this.animals = new Animal[25];
    this.name = null;
    this.city = null;
    this.nbrCages = -1;
    this.animalsLength = 0;
  }

  public Zoo(final Animal[] animals, final String name, final String city, final int nbrCages) {
    this.animals = new Animal[25];
    if (name.isEmpty() || name.isBlank()) { // Instruction 18
      System.err.println("[WARR] Name can't be empty/blank, we will set it `none`");
      this.name = "none";
    } else
      this.name = name;
    this.city = city;
    this.nbrCages = nbrCages;
    this.animalsLength = Math.min(animals.length, 25);

    // Copy animals into this.animals
    for (int i = 0; i < this.animalsLength; ++i)
      this.animals[i] = animals[i];
  }

  public void displayZoo() {
    System.out.printf("""
        Zoo Name...%s
        City.......%s
        Cages Nbr..%d
        """, name, city, nbrCages);
  }

  @Override
  public String toString() {
    return String.format("%s -- %s -- %d", name, city, nbrCages);
  }

  /**
   * Instruction 17
   *
   * @param animal {@code Animal}
   * @return {@code boolean}
   *
   */
  public boolean addAnimal(final Animal animal) {
    if (animalsLength == 25 || searchAnimal(animal) != -1 || isZooFull())
      return false;
    animals[animalsLength++] = animal;
    return true; // Added :°
  }

  /**
   * Instruction 11
   *
   * <p>
   * I use `Animal.toString()` method because i don't wanna to change `Animal`
   * attributes access modifiers (private) :)
   * </p>
   */
  public void displayAnimals() {
    System.out.println("Family -- Name -- Age -- IsMammal");
    for (int i = 0; i < animalsLength; ++i)
      System.out.println(animals[i]);
  }

  /**
   * Instruction 11
   *
   * <p>
   * none
   * </p>
   *
   * @param animal {@code Animal}
   * @return {@code int}
   *
   * @see Animal#equals(Object)
   */
  public int searchAnimal(final Animal animal) {
    if (animal == null) // Or `this == obj` can be true in some case
      return -1;
    for (int i = 0; i < animalsLength; ++i)
      if (animal.equals(animals[i]))
        return i;
    return -1;
  }

  // Instruction 13
  public boolean removeAnimal(final Animal animal) {
    int animalIndex = searchAnimal(animal);
    if (animalIndex == -1)
      return false;
    for (int i = animalIndex + 1; i < animalsLength; ++i)
      animals[i - 1] = animals[i];
    animals[--animalsLength] = null;
    return true; // Dummy
  }

  // Instruction 15
  public boolean isZooFull() {
    return animalsLength == nbrCages;
  }

  // Instruction 16
  Zoo comparerZoo(final Zoo z1, final Zoo z2) {
    return (z1.animalsLength >= z2.animalsLength) ? z1 : z2;
  }
} // Zoo class
