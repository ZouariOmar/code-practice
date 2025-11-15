package src;

public interface DepartmentInterface<T> {
  void addDepartment(T t);

  boolean findDepartment(String s);

  boolean findDepartment(T t);

  void removeDepartment(T t);

  void printDepartments();

  void sortDepartmentsById();

  void sortDepartmentsByNameAndEmployeesNumber();
} // DepartmentInterface interface
