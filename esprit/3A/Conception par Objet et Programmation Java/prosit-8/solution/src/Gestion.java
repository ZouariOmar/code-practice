/**
 * IGestion.java
 *
 * Main Employees manager
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 2025-11-04
 * @category Employee
 */

// Pkg name
package src;

public interface Gestion<T> {
  void addEmployee(T t);

  boolean findEmployee(String name);

  boolean findEmployee(T t);

  void removeEmployee(T t);

  void displayEmployee();

  void sortEmployeeById();

  void sortEmployeeByDepartmentNameAndGrade();
} // IGestion interface
