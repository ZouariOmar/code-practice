/**
 * AquaticAnimal.java
 *
 * AquaticAnimal java class
 *
 * <p>AquaticAnimal ---> Animal</p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/10/2025
 *
 * <a href="https://github.com/ZouariOmar/code-practice/tree/main/esprit/3A/Conception%20par%20Objet%20et%20Programmation%20Java/prosit-5/solution/animal/AquaticAnimal.java">
 *  AquaticAnimal.java
 * </a>
 */

// AquaticAnimal pkg name
package animal;

public abstract sealed class AquaticAnimal extends Animal permits DolphinAquaticAnimal, PenguinAquaticAnimal {
  protected String habitat;

  public AquaticAnimal() {
    this.habitat = null;
  }

  public AquaticAnimal(String habitat) {
    this.habitat = habitat;
  }

  public AquaticAnimal(String family, String name, int age, boolean isMammal, String habitat) {
    super(family, name, age, isMammal);

    this.habitat = habitat;
  }

  /**
   * You know :)
   *
   * <p>
   * none
   * </p>
   *
   * @return {@code String}
   */
  @Override
  public String toString() {
    return String.format("{'family': '%s', 'name': '%s', 'age': '%d', 'isMammal': '%B', 'habitat': '%s'}",
        family,
        name,
        age,
        isMammal,
        habitat);
  }

  /**
   * Instruction 24
   *
   * <p>
   * none
   * </p>
   *
   * {@code
   *  new AquaticAnimal().swim(); // stdout: "This aquatic animal is swimming."
   * }
   */
  public abstract void swim();

  @Override
  public boolean equals(Object obj) {
    if (this == obj)
      return true;

    if (obj == null || this.getClass() != obj.getClass())
      return false;

    AquaticAnimal animal = (AquaticAnimal) obj;
    return this.name.equals(animal.name) &&
        this.age == animal.age &&
        this.habitat.equals(animal.habitat);
  }
} // AquaticAnimal class
