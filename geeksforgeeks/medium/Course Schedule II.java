import java.util.ArrayList;
import java.util.Arrays;

/**
 * Course Schedule II.java
 *
 * GFG
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 01/11/2025
 *
 *        <a
 *        href=https://www.geeksforgeeks.org/problems/course-schedule/1>geeksforgeeks</a>
 */

class Solution {
  public ArrayList<Integer> findOrder(int n, int[][] prerequisites) {
    int c[] = new int[n];
    List<List<Integer>> edges = new ArrayList<>();
    List<Integer> ans = new ArrayList<>();
    Queue<Integer> q = new LinkedList<>();

    for (int i = 0; i < n; ++i)
      edges.add(new ArrayList<>());

    for (final int i[] : prerequisites) {
      edges.get(i[1]).add(i[0]);
      ++c[i[0]];
    }

    for (int i = 0; i < n; i++)
      if (c[i] == 0)
        q.add(i);
    while (!q.isEmpty()) {
      int e = q.poll();
      ans.add(e);
      for (int k : edges.get(e))
        if (--c[k] == 0)
          q.add(k);
    }

    return ans.size() != n ? new ArrayList<Integer>() : ans;
  }
} // Solution class
