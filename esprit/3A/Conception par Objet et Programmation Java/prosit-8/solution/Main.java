/**
 * Main.java
 *
 * The Entry point
 *
 * <p>none</p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 04/11/2025
 */

// Local imports
import src.Employee;
import src.SocietyArrayList;

void main() {
  Employee emp1 = new Employee(1, "John", "Doe", "IT", 5);
  Employee emp2 = new Employee(2, "Jane", "Smith", "it", 3);
  Employee emp3 = new Employee(3, "Michael", "Brown", "Finance", 4);
  Employee emp4 = new Employee(4, "Emily", "Davis", "Marketing", 2);

  SocietyArrayList society = new SocietyArrayList();
  society.addEmployees(emp2, emp1, emp4, emp3);

  System.out.println("Without sort:");
  society.displayEmployee();

  System.out.println("With id sort");
  society.sortEmployeeById();
  society.displayEmployee();

  System.out.println("With department & grade sort");
  society.sortEmployeeByDepartmentNameAndGrade();
  society.displayEmployee();

  System.out.println("`IT` Employee(s)..." + society.searchByDepartment("IT"));
} // main func (java +25)
