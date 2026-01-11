import java.util.ArrayList;
import java.util.List;

/**
 * 876. Middle of the Linked List.java
 *
 * Leetcode easy problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/24/2025
 *
 *        <a href=
 *        "https://leetcode.com/problems/middle-of-the-linked-list">leetcode</a>
 */

class ListNode {
  int val;
  ListNode next;

  ListNode() {
  }

  ListNode(int val) {
    this.val = val;
  }

  ListNode(int val, ListNode next) {
    this.val = val;
    this.next = next;
  }
} // ListNode class

class Solution {
  public ListNode middleNode(ListNode head) {
    List<ListNode> res = new ArrayList<>();

    while (head != null) {
      res.add(head);
      head = head.next;
    }

    return res.get(res.size() / 2);
  }
} // Solution class
