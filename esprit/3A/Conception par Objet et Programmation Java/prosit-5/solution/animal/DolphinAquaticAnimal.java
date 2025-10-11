/**
 * DolphinAquaticAnimal.java
 *
 * DolphinAquaticAnimal java class
 *
 * <p>DolphinAquaticAnimal ---> AquaticAnimal ---> Animal</p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/10/2025
 *
 * <a href="https://github.com/ZouariOmar/code-practice/tree/main/esprit/3A/Conception%20par%20Objet%20et%20Programmation%20Java/prosit-5/solution/animal/DolphinAquaticAnimal.java">
 *  DolphinAquaticAnimal.java
 * </a>
 */

// DolphinAquaticAnimal pkg name
package animal;

public final class DolphinAquaticAnimal extends AquaticAnimal {
  private float swimmingSpeed;

  public DolphinAquaticAnimal() {
    this.swimmingSpeed = 30; // 30km :)
  }

  public DolphinAquaticAnimal(float swimmingSpeed) {
    this.swimmingSpeed = swimmingSpeed;
  }

  public DolphinAquaticAnimal(String family, String name, int age, boolean isMammal, String habitat,
      float swimmingSpeed) {
    super(family, name, age, isMammal, habitat);
    this.swimmingSpeed = swimmingSpeed;
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
        "{'family': '%s', 'name': '%s', 'age': '%d', 'isMammal': '%B', 'habitat': '%s', 'swimmingSpeed': '%.2f'}",
        family,
        name,
        age,
        isMammal,
        habitat,
        swimmingSpeed);
  }

  /**
   * Instruction 24
   *
   * <p>
   * none
   * </p>
   *
   * {@code
   *  new DolphinAquaticAnimal().swim(); // stdout: "This dolphin is swimming."
   * }
   */
  @Override
  public void swim() {
    System.out.println("This dolphin is swimming.");
  }
} // DolphinAquaticAnimal class
