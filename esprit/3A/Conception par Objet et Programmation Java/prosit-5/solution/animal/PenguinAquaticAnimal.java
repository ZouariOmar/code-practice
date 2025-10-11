/**
 * PenguinAquaticAnimal.java
 *
 * PenguinAquaticAnimal java class
 *
 * <p>PenguinAquaticAnimal ---> AquaticAnimal ---> Animal</p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/10/2025
 *
 * <a href="https://github.com/ZouariOmar/code-practice/tree/main/esprit/3A/Conception%20par%20Objet%20et%20Programmation%20Java/prosit-5/solution/animal/PenguinAquaticAnimal.java">
 *  PenguinAquaticAnimal.java
 * </a>
 */

// PenguinAquaticAnimal pkg name
package animal;

public final class PenguinAquaticAnimal extends AquaticAnimal {
  private float swimmingDepth;

  public PenguinAquaticAnimal() {
    this.swimmingDepth = 400; // 400m :-)
  }

  public PenguinAquaticAnimal(float swimmingDepth) {
    this.swimmingDepth = swimmingDepth;
  }

  public PenguinAquaticAnimal(String family, String name, int age, boolean isMammal, String habitat,
      float swimmingDepth) {
    super(family, name, age, isMammal, habitat);
    this.swimmingDepth = swimmingDepth;
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
    return String.format(
        "{'family': '%s', 'name': '%s', 'age': '%d', 'isMammal': '%B', 'habitat': '%s', 'swimmingDepth': '%.2f'}",
        family,
        name,
        age,
        isMammal,
        habitat,
        swimmingDepth);
  }
} // PenguinAquaticAnimal
