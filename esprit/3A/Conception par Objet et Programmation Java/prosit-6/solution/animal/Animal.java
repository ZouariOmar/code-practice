
/**
 * Animal.java
 *
 * Animal java class
 *
 * <p>
 * [NOTE] A fundamental rule of sealed classes is that all their permitted subclasses must be declared in the same module (java 15+)
 * [SEE]  https://stackoverflow.com/questions/68496244/sealed-classes-for-classes-in-different-packages
 * </p>
 *
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/10/2025
 *
 * <a href="https://github.com/ZouariOmar/code-practice/tree/main/esprit/3A/Conception%20par%20Objet%20et%20Programmation%20Java/prosit-5/solution/animal/Animal.java">
 *  Animal.java
 * </a>
 */

// Animal pkg name
package animal;

public sealed class Animal permits AquaticAnimal, TerrestrialAnimal {
  protected String family, name;
  protected int age;
  protected boolean isMammal;

  public Animal() {
    family = null;
    name = null;
    age = -1;
    isMammal = false;
  }

  public Animal(String family, String name, int age, boolean isMammal) {
    this.family = family;
    this.name = name;

    if (age < 0) {
      System.err.println("[WARR] age can't be zero, we will set age to 10");
      this.age = 10;
    } else
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
    return String.format("{'family': '%s', 'name': '%s', 'age': '%d', 'isMammal': '%B'}", family, name, age, isMammal);
  }

  @Override
  public boolean equals(Object obj) {
    if (this == obj)
      return true;

    if (obj == null || this.getClass() != obj.getClass())
      return false;

    return this.name.equals(((Animal) obj).name);
  }
} // Animal class
