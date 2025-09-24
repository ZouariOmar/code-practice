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
   * Instruction 10 + Instruction 12 (second point)
   *
   * <p>
   * Que remarquez-vous ?
   * > If i don't check every case is `null` or not,
   * it can cause <b>data loss</b> or `ArrayIndexOutOfBoundsException` :)
   * </p>
   *
   * @param animal {@code Animal}
   * @return {@code boolean}
   *
   */
  public boolean addAnimal(final Animal animal) {
    if (animalsLength == 25 || searchAnimal(animal) != -1)
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
