public class Zoo {
  private final Animal[] animals;
  private final String name, city;
  private final int nbrCages;
  private int animalsLength;

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
}
