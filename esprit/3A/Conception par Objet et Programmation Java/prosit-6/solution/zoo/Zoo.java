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
import animal.AquaticAnimal;
import animal.DolphinAquaticAnimal;
import animal.PenguinAquaticAnimal;

public class Zoo {
  private static final int ANIMAL_ARRAY_LENGTH = 25;
  private static final int AQUATIC_ANIMAL_ARRAY_LENGTH = 10;

  private final Animal[] animals;
  private int animalsLength;

  private final AquaticAnimal[] aquaticAnimals;
  private int aquaticAnimalsLength;

  private final String name, city;
  private final int nbrCages;

  public Zoo(Animal[] animals, AquaticAnimal[] aquaticAnimals, String name, String city, int nbrCages) {
    this.animalsLength = Math.min(animals.length, ANIMAL_ARRAY_LENGTH);
    this.animals = new Animal[ANIMAL_ARRAY_LENGTH];
    for (int i = 0; i < animals.length; ++i) // Copy animals into this.animals
      this.animals[i] = animals[i];

    this.aquaticAnimalsLength = Math.min(aquaticAnimals.length, AQUATIC_ANIMAL_ARRAY_LENGTH);
    this.aquaticAnimals = new AquaticAnimal[AQUATIC_ANIMAL_ARRAY_LENGTH];
    for (int i = 0; i < aquaticAnimals.length; ++i) // Copy `aquaticAnimals` into `this.aquaticAnimals`
      this.aquaticAnimals[i] = aquaticAnimals[i];

    this.name = name;
    this.city = city;
    this.nbrCages = nbrCages;
  }

  public Zoo(final Animal[] animals, final String name, final String city, final int nbrCages) {
    this.animalsLength = Math.min(animals.length, ANIMAL_ARRAY_LENGTH);
    this.animals = new Animal[ANIMAL_ARRAY_LENGTH];
    for (int i = 0; i < animals.length; ++i) // Copy animals into this.animals
      this.animals[i] = animals[i];

    this.aquaticAnimals = new AquaticAnimal[AQUATIC_ANIMAL_ARRAY_LENGTH];
    this.aquaticAnimalsLength = 0;

    this.name = name;
    this.city = city;
    this.nbrCages = nbrCages;
  }

  public Zoo() {
    this.animalsLength = 0;
    this.animals = new Animal[ANIMAL_ARRAY_LENGTH];

    this.aquaticAnimalsLength = 0;
    this.aquaticAnimals = new AquaticAnimal[AQUATIC_ANIMAL_ARRAY_LENGTH];

    this.name = null;
    this.city = null;
    this.nbrCages = -1;
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
    if (animal == null) // Or `this == obj` can be true in some cases
      return -1;

    for (int i = 0; i < animalsLength; ++i)
      if (animal.equals(animals[i]))
        return i;

    return -1;
  }

  // Instruction 13
  public boolean removeAnimal(final Animal animal) {
    final int animalIndex = searchAnimal(animal);

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

  /**
   * Instruction 26 :)
   *
   * <p>
   * [BRIEF]
   * - Add new `AquaticAnimal` into `aquaticAnimals` array
   * 
   * [NOTES]
   * - IO.println work for java 23+
   * - We can emit `ArrayIndexOutOfBoundsException`, but ma9rinahach :)
   * </p>
   *
   * @param aquatic {@code AquaticAnimal}
   *
   *                <pre>
   * {@code
   *  new AquaticAnimal().addAquaticAnimal(new AquaticAnimal);
   * }</pre>
   *
   *                <a href=
   *                "https://docs.oracle.com/en/java/javase/23/docs/api/java.base/java/io/IO.html">
   *                Class IO
   *                </a>
   */
  public void addAquaticAnimal(AquaticAnimal aquatic) {
    if (aquaticAnimalsLength == AQUATIC_ANIMAL_ARRAY_LENGTH) {
      System.err.println("[ERROR] Can't add another aquatic animal. `AquaticAnimal` array reach his limit!");
      return;
    }

    aquaticAnimals[aquaticAnimalsLength++] = aquatic;
  }

  public float maxPenguinSwimmingDepth() {
    float res = -1f;
    for (int i = 0; i < aquaticAnimalsLength; ++i) {
      AquaticAnimal aquaticAnimal = aquaticAnimals[i];
      if (aquaticAnimal.getClass().equals(PenguinAquaticAnimal.class))
        res = Math.max(res, ((PenguinAquaticAnimal) aquaticAnimal).getSwimmingDepth());
    }

    if (res == -1f)
      System.err.println("[WARR] There is no `PenguinAquaticAnimal` inside `aquaticAnimals`!");

    return res;
  }

  public void displayNumberOfAquaticsByType() {
    int dolphinNbr = 0, penguineNbr = 0;

    for (int i = 0; i < aquaticAnimalsLength; ++i) {
      AquaticAnimal aquaticAnimal = aquaticAnimals[i];
      if (aquaticAnimal instanceof DolphinAquaticAnimal)
        ++dolphinNbr;
      else if (aquaticAnimal instanceof PenguinAquaticAnimal) // I make `else if` (not `else`) for features scalability
        ++penguineNbr;
    }

    System.out.printf("Number Of Dolphins...%d\nNumber Of Penguins...%d\n", dolphinNbr, penguineNbr);
  }

  // ===============================
  // === GETTERS && SETTERS PART ===
  // ===============================

  // We need it for Instruction 27
  public AquaticAnimal[] getAquaticAnimals() {
    return aquaticAnimals;
  }
} // Zoo class
