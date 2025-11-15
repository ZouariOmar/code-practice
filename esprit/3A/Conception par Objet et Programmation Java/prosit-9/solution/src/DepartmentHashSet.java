package src;

import java.util.Comparator;
import java.util.HashSet;
import java.util.Set;
import java.util.TreeSet;

import src.Department;
import src.DepartmentInterface;

public class DepartmentHashSet implements DepartmentInterface<Department> {
  private Set<Department> set;

  public DepartmentHashSet() {
    this.set = new HashSet<>();
  }

  public void addDepartment(Department department) {
    set.add(department);
  }

  public boolean findDepartment(String name) {
    for (final Department department : set) {
      if (department.getDepartmentName().equals(name))
        return true;
    }
    return false;
  }

  public boolean findDepartment(Department department) {
    return set.contains(department);
  }

  public void removeDepartment(Department department) {
    set.remove(department);
  }

  public void printDepartments() {
    set.forEach(System.out::println);
  }

  public void sortDepartmentsById() {
    Set<Department> oldSet = set;
    set = new TreeSet<>(Comparator.comparingInt(Department::getId));
    set.addAll(oldSet);

  }

  public void sortDepartmentsByNameAndEmployeesNumber() {
    Set<Department> oldSet = set;
    // INFO: equals() and hashCode() are ignored for determining duplicates inside a
    // TreeSet.
    set = new TreeSet<>(
        Comparator.comparing(Department::getDepartmentName)
            .thenComparing(Department::getEmployeesNumber)
            .thenComparing(Department::getId)); // Ensures uniqueness, because TreeSet uses compare to determine both
                                                // order and uniqueness :)
    set.addAll(oldSet);
  }
} // DepartmentHashSet class
