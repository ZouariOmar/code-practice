/**
 * EmployeeDepartmentNameAndGradeComparator.java
 *
 * Employee department(name) and grade comparator
 *
 * <p>EmployeeDepartmentNameAndGradeComparator ---> Comparator<Employee></p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 04/11/2025
 * @see src.SocietyArrayList#sortEmployeeByDepartmentNameAndGrade()
 * @category ComparatorHelper
 */

// Pkg name
package Helpers;

// Java util imports
import java.util.Comparator;

// Local imports
import src.Employee;

public class EmployeeDepartmentNameAndGradeComparator implements Comparator<Employee> {
  @Override
  public int compare(Employee e1, Employee e2) {
    int res = e1.getDepartmentName().toLowerCase().compareTo(e2.getDepartmentName().toLowerCase());
    return res == 0 ? Integer.compare(e1.getGrade(), e2.getGrade()) : res;
  }
} // EmployeeDepartmentNameAndGradeComparator class
