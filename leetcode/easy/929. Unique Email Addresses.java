import java.util.HashSet;
import java.util.Set;

/**
 * 929. Unique Email Addresses.java
 *
 * Easy leetcode problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 2026-01-24
 *
 *        <a href=
 *        "https://leetcode.com/problems/unique-email-addresses">leetcode</a>
 */

class Solution {
  private static String getOriginalEamil(final String email) {
    StringBuilder orginalEmail = new StringBuilder();
    boolean ignore = false, atEnd = false;

    for (final char c : email.toCharArray()) {
      if (!atEnd && c == '+') {
        ignore = true;
      } else if (c == '@') {
        ignore = false;
        atEnd = true;
      } else if (!atEnd && c == '.') {
        continue;
      }
      if (!ignore) {
        orginalEmail.append(c);
      }
    }

    return orginalEmail.toString();
  }

  public int numUniqueEmails(String[] emails) {
    Set<String> set = new HashSet<>();
    for (final String email : emails)
      set.add(getOriginalEamil(email));
    return set.size();
  }
} // Solution class
