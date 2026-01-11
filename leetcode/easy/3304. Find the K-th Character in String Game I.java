/**
 * 3304. Find the K-th Character in String Game I.java
 *
 * https://leetcode.com/problems/find-the-k-th-character-in-string-game-i
 *
 * @author @ZouariOmar <zouariomar20@gmail.com>
 * @version 0.1
 * @since 2025-07-03
 */

class Solution {
  public char kthCharacter(int k) {
    String s = "abbcbccdbccdcddebccdcddecddedeefbccdcddecddedeefcddedeefdeefeffgbccdcddecddedeefcddedeefdeefeffgcddedeefdeefeffgdeefeffgeffgfgghbccdcddecddedeefcddedeefdeefeffgcddedeefdeefeffgdeefeffgeffgfgghcddedeefdeefeffgdeefeffgeffgfgghdeefeffgeffgfggheffgfgghfgghghhibccdcddecddedeefcddedeefdeefeffgcddedeefdeefeffgdeefeffgeffgfgghcddedeefdeefeffgdeefeffgeffgfgghdeefeffgeffgfggheffgfgghfgghghhicddedeefdeefeffgdeefeffgeffgfgghdeefeffgeffgfggheffgfgghfgghghhideefeffgeffgfggheffgfgghfgghghhieffgfgghfgghghhifgghghhighhihiij";
    return s.charAt(k - 1);
  }
} // Solution class

// public char kthCharacter(int k) {
// return (char) ('a' + Integer.bitCount(k - 1));
// }
