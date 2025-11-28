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
 * @see https://github.com/ZouariOmar/code-practice/blob/main/esprit/3A/Conception%20par%20Objet%20et%20Programmation%20Java/prosit-10/solution/src/Employee.java
 */

// Employee pkgname
package src;

// Java util import
import java.util.Objects;

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

  // #################################
  // ### OVERRIDDEN FUNCTIONS PART ###
  // #################################
  @Override
  public String toString() {
    return String.format("{'id': %d, 'prename': %s, 'name': %s, 'departmentName': %s, 'grade': %d}",
        id,
        prename,
        name,
        departmentName, grade);
  }

  @Override
  public boolean equals(Object obj) {
    if (obj == null || obj.getClass() != this.getClass())
      return false;
    return this.id == ((Employee) obj).id;
  };

  @Override
  public int compareTo(Employee e) {
    return Integer.compare(this.id, e.id);
  }

  @Override
  public int hashCode() {
    return Objects.hashCode(id);
  };

  // ###############################
  // ### GETTERS && SETTERS PART ###
  // ###############################
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
} // Employee class
