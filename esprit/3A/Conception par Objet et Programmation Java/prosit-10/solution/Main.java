/**
 * Main.java
 *
 * The Entry point
 *
 * <p>Prosit 10</p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 2025-11-25
 * @see https://github.com/ZouariOmar/code-practice/blob/main/esprit/3A/Conception%20par%20Objet%20et%20Programmation%20Java/prosit-10/solution/Main.java
 */

// Local imports
import src.*;

void main() {
  AffectationHashMap map = new AffectationHashMap();
  Department it = new Department(0, 100, "IT");
  Department hr = new Department(1, 50, "HR");
  Department gl = new Department(2, 90, "GL");
  map.add(new Employee(0, "zouari", "omar", it.getDepartmentName(), 10), it);
  map.add(new Employee(1, "zouari", "tom", hr.getDepartmentName(), 14), hr);
  map.add(new Employee(2, "zouari", "jhon", gl.getDepartmentName(), 11), gl);
  map.add(new Employee(2, "zouari", "jhon2", gl.getDepartmentName(), 20), gl);
  map.print();
  System.out.println(map.sort());
} // main func (java +25)
