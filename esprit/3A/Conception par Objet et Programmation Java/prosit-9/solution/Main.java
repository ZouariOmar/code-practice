/**
 * Main.java
 *
 * The Entry point
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 15/11/2025
 */

// Local imports
import src.Department;
import src.DepartmentHashSet;

void main() {
  Department a = new Department(1, 10, "hello");
  Department b = new Department(1, 11, "hello");
  Department c = new Department(2, 10, "hello");
  Department d = new Department(2, 10, "hello");
  Department e = new Department(3, 15, "hellf");
  DepartmentHashSet set = new DepartmentHashSet();
  set.addDepartment(a);
  set.addDepartment(b);
  set.addDepartment(c);
  set.addDepartment(d);
  set.addDepartment(e);
  System.out.println("Before Sort:");
  set.printDepartments();
  System.out.println("After Sort:");
  set.sortDepartmentsByNameAndEmployeesNumber();
  set.printDepartments();
} // main func (java +25)
