public class Animal {
  private String family, name;
  private int age;
  private boolean isMammal;

  public Animal(String family, String name, int age, boolean isMammal) {
    this.family = family;
    this.name = name;
    this.age = age;
    this.isMammal = isMammal;
  }

  /**
   * You know :)
   *
   * <p>
   * Just i use it to make Instruction 11 more easier
   * </p>
   *
   * @return {@code String}
   *
   * @see Zoo#displayAnimals
   */
  @Override
  public String toString() {
    return String.format("%s -- %s -- %d -- %B", family, name, age, isMammal);
  }

  @Override
  public boolean equals(Object obj) {
    if (this == obj)
      return true;
    if (obj == null || this.getClass() != obj.getClass())
      return false;
    return this.name == ((Animal) obj).name;
  }
} // Animal class
