/**
 * 1784. Check if Binary String Has at Most One Segment of Ones
 *
 * leecode easy problem
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0.0
 * @since 2026-03-06
 *
 *        <a href=
 *        "https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones">
 *        1784. Check if Binary String Has at Most One Segment of Ones
 *        </a>
 */
class Solution {
  public boolean checkOnesSegment(String s) {
    return !s.contains("01");
  }
}; // Solution class
