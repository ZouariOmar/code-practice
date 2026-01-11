
/**
 * 3136. Valid Word.java
 *
 * 3136. Valid Word leetcode problem
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 16/07/2025
 * @see https://leetcode.com/problems/valid-word/description/?envType=daily-question&envId=2025-07-15
 */

class Solution {
  public boolean isValid(String word) {
    if (word.length() < 3)
      return false;

    boolean hasVowel = false, hasConsonant = false;

    for (int i = 0; i < word.length(); i++) {
      switch (word.charAt(i)) {
        case 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U':
          hasVowel = true;
          break;
        case 'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z',
            'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z':
          hasConsonant = true;
          break;
        case '0', '1', '2', '3', '4', '5', '6', '7', '8', '9':
          break;
        default:
          return false;
      }
    }
    return hasVowel && hasConsonant;
  }
} // Solution class
