import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 * 2273. Find Resultant Array After Removing Anagrams.java
 *
 * leetcode easy problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 13/10/2025
 *
 *        <a href=
 *        "https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/description/?envType=daily-question&envId=2025-10-13">
 *        leetcode
 *        </a>
 */

class Solution {
  private static boolean isAnagram(String s1, String s2) {
    if (s1.length() != s2.length())
      return false;

    int[] freq = new int[26];

    for (int i = 0; i < s1.length(); i++)
      freq[s1.charAt(i) - 'a']++;

    for (int i = 0; i < s2.length(); i++)
      freq[s2.charAt(i) - 'a']--;

    for (int count : freq)
      if (count != 0)
        return false;

    return true;
  }

  public List<String> removeAnagrams(String[] words) {
    List<String> ans = new ArrayList<>();
    ans.add(words[0]);
    for (int i = 1; i < words.length; ++i)
      if (!isAnagram(words[i], ans.get(ans.size() - 1)))
        ans.add(words[i]);
    return ans;
  }

} // Solution class
