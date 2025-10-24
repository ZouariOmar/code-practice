/**
 * InvalidAgeException.java
 *
 * Cutstom animal age exception
 *
 * <p>InvalidAgeException --> Throwable</p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 24/10/2025
 */

// `InvalidAgeException` pkg name
package animal;

public class InvalidAgeException extends Throwable {
  private static final String ERROR_MSG_TEMPLATE = "[ERROR] Invalid Animal Age. ";

  public InvalidAgeException(String message) {
    super(ERROR_MSG_TEMPLATE + message);
  }
} // InvalidAgeException class
