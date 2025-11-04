/**
 * SocietyArrayList.java
 *
 * Employees holder (+actions)
 *
 * <p>
 * SocietyArrayList |---> Gestion<Employee>
 *                  |---> AdvancedSearch<Employee>
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 04/11/2025
 * @category Employee
 */

// Pkg name
package src;

// Java util imports
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

// Local imports
import Helpers.EmployeeDepartmentNameAndGradeComparator;

public class SocietyArrayList implements Gestion<Employee>, AdvancedSearch<Employee> {
  private List<Employee> employees;

  public SocietyArrayList() {
    employees = new ArrayList<>();
  }

  public void addEmployees(Employee... employees) {
    this.employees.addAll(Arrays.asList(employees));
  }

  // ===============================================
  // === Override methods from Gestion<Employee> ===
  // ===============================================

  @Override
  public void addEmployee(Employee e) {
    employees.add(e);
  }

  @Override
  public void displayEmployee() {
    for (final Employee e : employees)
      System.out.println(e);
  }

  @Override
  public boolean findEmployee(String name) {
    for (final Employee e : employees)
      if (e.getName().equals(name))
        return true;
    return false;
  }

  @Override
  public boolean findEmployee(Employee e) {
    return employees.contains(e);
  }

  @Override
  public void removeEmployee(Employee e) {
    employees.remove(e);
  }

  @Override
  public void sortEmployeeByDepartmentNameAndGrade() {
    Collections.sort(employees, new EmployeeDepartmentNameAndGradeComparator());
  }

  @Override
  public void sortEmployeeById() {
    Collections.sort(employees); // Or use `employees.sort((final Employee e1, final Employee e2) ->
                                 // Integer.compare(e1.getId(), e2.getId()));` Ama Mr 9al idk lambda exp :^)
  }

  // ======================================================
  // === Override methods from AdvancedSearch<Employee> ===
  // ======================================================

  /**
   * Return employees under `departmentName`
   *
   * <p>
   * - NOTE: We support lower-case comparing
   * </p>
   *
   * @param departmentName {@code String}
   * @return {@code List<Employee>}
   */
  @Override
  public List<Employee> searchByDepartment(String departmentName) {
    List<Employee> res = new ArrayList<>();
    departmentName = departmentName.toLowerCase();
    for (final Employee e : employees)
      if (e.getDepartmentName().toLowerCase().equals(departmentName))
        res.add(e);
    return res;
  }
} // SocietyArrayList class
