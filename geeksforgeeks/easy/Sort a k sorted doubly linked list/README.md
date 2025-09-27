# 🌟 C++ Solution || Step-by-Step Breakdown 💯🔥

✅ Intuition
When we hear that a doubly linked list is k-sorted, it means each element is at most k positions away from its correct position in a fully sorted list. This kind of problem can be efficiently solved using a min-heap (priority queue). The idea is that if each element is at most k positions away from its correct spot, by looking at only the next k+1 elements, we can always pick the smallest one and maintain the order.

✅ Approach
    - Initialize a Min-Heap: The min-heap will help us keep track of the smallest elements among the current window of size k + 1.
    - Iterate Through the List:
        We start by inserting the first k + 1 elements into the heap.
        Then, for each element in the list, we extract the smallest element from the heap and place it at its correct position.
        As we extract the minimum, we insert the next element in the list into the heap to maintain the sliding window of size k + 1.
    - Final Step: Once the list is processed, continue extracting the remaining elements from the heap to complete the sorting.

By focusing only on k + 1 elements at a time, we ensure that we are always selecting the smallest element that can appear in the next position.

✅ Complexity
    - Time Complexity:
        The min-heap insert and extract operations take O(log k).
        Since we process n nodes and each insertion/extraction is O(log k), the overall time complexity is O(n * log k).
    - Space Complexity:
        We only store k + 1 elements in the heap at any time, so the space complexity is O(k).

✅ Code

```cpp
/**
 * @brief ### function to sort a k sorted doubly linked list
 * @param head DLLNode *
 * @param k int
 * @return DLLNode *
 */
DLLNode *Solution::sortAKSortedDLL(DLLNode *head, int k) {
  priority_queue<int, vector<int>, greater<int> > pq;
  DLLNode* tail = head, *nexty = nullptr;
  int freq = k + 1;

  while (tail && freq > 0) {
    pq.push(tail->data);
    tail = tail->next;
    nexty = tail;
    freq--;
  }

  tail = head;
  while (nexty) {
    int minVal = pq.top();
    pq.pop();
    tail->data = minVal;
    tail = tail->next;
    pq.push(nexty->data);
    nexty = nexty->next;
  }

  while (tail && !pq.empty()) {
    int minVal = pq.top();
    pq.pop();
    tail->data = minVal;
    tail = tail->next;
  }

  return head;
}
```

✅ Step-by-Step Detailed Explanation

    1. Initialize a Min-Heap: The heap keeps track of the smallest values among the current window of k + 1 elements. In each solution, we initialize a heap and add the first k + 1 nodes of the list.

    2. Extract Minimum: We repeatedly extract the smallest element from the heap (which will be the next in sorted order) and insert it into the new sorted list.

    3. Add New Elements to Heap: As we extract one element from the heap, we move to the next element in the list and add it to the heap, maintaining the sliding window of k + 1 elements.

    4. Finalize: After all elements from the list are processed, the heap contains the remaining unsorted elements, which are extracted one by one and appended to the sorted list. This results in the full list being sorted.
