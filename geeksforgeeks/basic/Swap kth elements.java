import java.util.Collections;
import java.util.List;

/**
 * Swap kth elements.java
 *
 * GFG
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 19/10/2025
 *
 *        <a href=
 *        "https://www.geeksforgeeks.org/problems/swap-kth-elements5500/1?page=1&sortBy=difficulty">
 *        geeksforgeeks
 *        </a>
 */

class Solution {
  public void swapKth(List<Integer> arr, int k) {
    Collections.swap(arr, k - 1, arr.size() - k);
  }
} // Solution class
