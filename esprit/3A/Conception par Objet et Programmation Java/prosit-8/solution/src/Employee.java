/**
 * Employee.java
 *
 * Employee entity
 *
 * <p>
 * Employee ---> Comparable<Employee>
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 04/11/2025
 * @category Employee
 */

// Pkg name
package src;

public class Employee implements Comparable<Employee> {
  private int id;
  private String prename;
  private String name;
  private String departmentName;
  private int grade;

  public Employee(int id, String prename, String name, String departmentName, int grade) {
    this.id = id;
    this.prename = prename;
    this.name = name;
    this.departmentName = departmentName;
    this.grade = grade;
  }

  public Employee() {
    this.id = 0;
    this.prename = null;
    this.name = null;
    this.departmentName = null;
    this.grade = 0;
  }

  @Override
  public String toString() {
    return String.format("{'id': %d, 'prename': %s, 'name': %s, 'departmentName': %s, 'grade': %d}",
        id,
        prename,
        name,
        departmentName, grade);
  }

  public String getName() {
    return name;
  }

  public int getId() {
    return id;
  }

  public String getDepartmentName() {
    return departmentName;
  }

  public int getGrade() {
    return grade;
  }

  @Override
  public int compareTo(Employee e) {
    return Integer.compare(this.id, e.id);
  }
} // Employee class
