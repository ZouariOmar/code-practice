/** @format */

class Node {
	constructor(data) {
		this.data = data;
		this.next = null;
	}
} // Node class

class Solution {
	/**
	 * @brief Function to count nodes of a linked list.
	 * @param {Node} head
	 * @returns {number}
	 */
	getCount(head) {
		var count = 0;
		while (head) {
			head = head.next;
			count++;
		}
		return count;
	}
} // Solution class
