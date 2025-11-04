/**
 * 3217. Delete Nodes From Linked List Present in Array.java
 *
 * Leetcode meduim problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 2025-11-01
 *
 *        <a href=
 *        "https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array">leetcode</a>
 */

public class ListNode {
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
  public ListNode modifiedList(int[] nums, ListNode head) {
    int max = -1;
    for (final int num : nums)
      max = num > max ? num : max;

    boolean[] freq = new boolean[max + 1];
    for (final int num : nums)
      freq[num] = true;

    ListNode temp = new ListNode(), current = temp;
    while (head != null) {
      if (head.val >= freq.length || freq[head.val] == false) {
        current.next = head;
        current = current.next;
      }
      head = head.next;
    }

    current.next = null;
    return temp.next;
  }
} // Solution class
