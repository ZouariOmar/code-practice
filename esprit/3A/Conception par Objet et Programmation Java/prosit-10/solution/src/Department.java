/**
 * Department.java
 *
 * Department entity
 *
 * <p>Prosit 10</p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 2025-11-28
 * @see https://github.com/ZouariOmar/code-practice/blob/main/esprit/3A/Conception%20par%20Objet%20et%20Programmation%20Java/prosit-10/solution/src/Department.java
 */

// Department pkgname
package src;

// Java util import
import java.util.Objects;

public class Department {
  private int id, employeesNumber;
  private String departmentName;

  public Department() {
    this.id = 0;
    this.employeesNumber = 10;
    this.departmentName = "foo";
  }

  public Department(final int id, final int employeesNumber, final String departmentName) {
    this.id = id;
    this.employeesNumber = employeesNumber;
    this.departmentName = departmentName;
  }

  // #################################
  // ### OVERRIDDEN FUNCTIONS PART ###
  // #################################
  @Override
  public boolean equals(Object obj) {
    if (obj == null || obj.getClass() != this.getClass())
      return false;

    Department objToDepartment = (Department) obj;
    return this.id == objToDepartment.id && this.departmentName.equals(objToDepartment.departmentName);
  };

  @Override
  public String toString() {
    return String.format("%s: {id: %d, employeesNumber: %d, departmentName: %s}",
        this.getClass().getName(),
        id,
        employeesNumber,
        departmentName);
  };

  @Override
  public int hashCode() {
    return Objects.hash(id, departmentName);
  }

  // ###############################
  // ### GETTERS && SETTERS PART ###
  // ###############################
  public String getDepartmentName() {
    return departmentName;
  }

  public int getEmployeesNumber() {
    return employeesNumber;
  }

  public int getId() {
    return id;
  }

  public void setDepartmentName(String departmentName) {
    this.departmentName = departmentName;
  }

  public void setEmployeesNumber(int employeesNumber) {
    this.employeesNumber = employeesNumber;
  }

  public void setId(int id) {
    this.id = id;
  }
} // Departement class
