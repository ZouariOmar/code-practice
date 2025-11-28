/**
 * AffectationHashMap.java
 *
 * Affect Employee into Department
 *
 * <p>Prosit 10</p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 2025-11-28
 * @see https://github.com/ZouariOmar/code-practice/blob/main/esprit/3A/Conception%20par%20Objet%20et%20Programmation%20Java/prosit-10/solution/src/AffectationHashMap.java
 */

// AffectationHashMap pkgname
package src;

// Java util imports
import java.util.Comparator;
import java.util.HashMap;
import java.util.Map;
import java.util.TreeMap;

public class AffectationHashMap {
  private Map<Employee, Department> map;

  public AffectationHashMap() {
    this.map = new HashMap<>();
  }

  public void add(Employee e, Department d) {
    map.put(e, d);
  }

  public void print() {
    System.out.println(map + "\nSIZE..." + map.size());
  }

  public void remove(Employee e) {
    map.remove(e);
  }

  public void remove(Employee e, Department d) {
    map.remove(e, d);
  }

  public void printEmployees() {
    System.out.println(map.keySet());
  }

  public void printDepartments() {
    System.out.println(map.values());
  }

  public boolean findEmployee(Employee e) {
    return map.containsKey(e);
  }

  public boolean findDepartment(Department d) {
    return map.containsValue(d);
  }

  public TreeMap<Employee, Department> sort() {
    TreeMap<Employee, Department> newMap = new TreeMap<>(Comparator.comparingInt(Employee::getId));
    newMap.putAll(map);
    return newMap;
  }
} // AffectationHashMap class
