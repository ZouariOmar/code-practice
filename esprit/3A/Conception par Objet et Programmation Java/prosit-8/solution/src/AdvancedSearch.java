/**
 * AdvancedSearch.java
 *
 * It contain search methods
 *
 * <p>none</p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 04/11/2025
 * @see SocietyArrayList#searchByDepartment(String)
 * @category Employee
 */

// Pkg name
package src;

// Java util imports
import java.util.List;

public interface AdvancedSearch<T> {
  List<T> searchByDepartment(String departmentName);
} // AdvancedSearch interface
