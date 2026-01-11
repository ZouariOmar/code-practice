
/**
 * Intersection in Y Shaped Lists.java
 *
 * GFG meduim problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 01/01/2026
 *
 *        <a href=
 *        "https://www.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1">geeksforgeeks</a>
 */

import java.util.HashSet;
import java.util.Set;

class Node {
  int data;
  Node next;

  Node(int d) {
    data = d;
    next = null;
  }
} // Node class

class Solution {
  public Node intersectPoint(Node head1, Node head2) {
    Set<Node> set = new HashSet<>();

    while (head1 != null) {
      set.add(head1);
      head1 = head1.next;
    }

    while (head2 != null) {
      if (set.contains(head2))
        return head2;
      head2 = head2.next;
    }

    return null;
  }
} // Solution class
