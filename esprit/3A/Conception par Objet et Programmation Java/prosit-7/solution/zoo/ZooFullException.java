/**
 * ZooFullException.java
 *
 * Custom zoo exception
 *
 * <p>
 * ZooFullException --> Throwable
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/24/2025
 */

// `ZooFullException` pkg name
package zoo;

public class ZooFullException extends Throwable {
  private static final String ERROR_MSG_TEMPLATE = "[ERROR] Can't add another animal. ";

  public ZooFullException(String message) {
    super(ERROR_MSG_TEMPLATE + message);
  }
} // ZooFullException class
