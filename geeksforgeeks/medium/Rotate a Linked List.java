import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/**
 * Rotate a Linked List.java
 *
 * GFG160
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 22/07/2025
 * @see https://www.geeksforgeeks.org/batch/gfg-160-problems/track/linked-list-gfg-160/problem/rotate-a-linked-list
 */

class Node {
  int data;
  Node next;

  Node(int d) {
    data = d;
    next = null;
  }
} // Node class

class Solution {
  public Node rotate(Node head, int k) {
    List<Integer> l = new ArrayList<>();
    Node curr = head;
    while (curr != null) {
      l.add(curr.data);
      curr = curr.next;
    }
    Collections.rotate(l, -k);
    curr = head;
    for (final int it : l) {
      curr.data = it;
      curr = curr.next;
    }
    return head;
  }
} /// Solution class
