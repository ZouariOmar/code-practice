/**
 * TerrestrialAnimal.java
 *
 * TerrestrialAnimal java class
 *
 * <p>TerrestrialAnimal ---> Animal</p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/10/2025
 *
 * <a href="https://github.com/ZouariOmar/code-practice/tree/main/esprit/3A/Conception%20par%20Objet%20et%20Programmation%20Java/prosit-5/solution/animal/TerrestrialAnimal.java">
 *  TerrestrialAnimal.java
 * </a>
 */

// TerrestrialAnimal pkg name
package animal;

public final class TerrestrialAnimal extends Animal {
  private final int nbrLegs;

  public TerrestrialAnimal() {
    this.nbrLegs = 4;
  }

  public TerrestrialAnimal(int nbrLegs) {
    this.nbrLegs = nbrLegs;
  }

  public TerrestrialAnimal(String family, String name, int age, boolean isMammal, int nbrLegs) {
    super(family, name, age, isMammal);
    this.nbrLegs = nbrLegs;
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
    return String.format("{'family': '%s', 'name': '%s', 'age': '%d', 'isMammal': '%B', 'nbrLegs': '%d'}",
        family,
        name,
        age,
        isMammal,
        nbrLegs);
  }
} // TerrestrialAnimal class
