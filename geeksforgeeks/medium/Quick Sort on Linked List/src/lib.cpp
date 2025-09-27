/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-29
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/quick-sort-on-linked-list/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief Sort the SLL using quick sort
 * @param head Node *
 * @return Node *
 */
Node* Solution::quickSort(Node* head) {
  if (!head) return nullptr;  // If the head is empty

  std::vector<int> holder;
  sll_to_vector(head, holder);           // Populate `holder` with SLL data
  helper(holder, 0, holder.size() - 1);  // Sort `holder` using quicksort
  return vector_to_sll(head, holder);    // Return the sorted linked list
}

/**
 * @brief Populate a vector with data from SLL
 * @param head Node *
 * @param arr vector<int> &
 */
void Solution::sll_to_vector(Node* head, std::vector<int>& arr) {
  while (head) {
    arr.push_back(head->data);
    head = head->next;
  }
}

/**
 * @brief Quick sort helper function
 * @param arr vector<int> &
 * @param l Start index (inclusive)
 * @param h End index (inclusive)
 */
void Solution::helper(std::vector<int>& arr, int l, int h) {
  if (l < h) {
    int pi = partition(arr, l, h);
    helper(arr, l, pi - 1);  // Sort the left sub-vector
    helper(arr, pi + 1, h);  // Sort the right sub-vector
  }
}

/**
 * @brief Partition function for quicksort
 * @param vec vector<int> &
 * @param l {int}: Start index (inclusive)
 * @param h {int}: End index (inclusive)
 * @return  {int}: Partition index
 */
int Solution::partition(std::vector<int>& vec, int l, int h) {
  int pivot = vec[h];  // Select the last element as pivot
  int i = l - 1;       // Index of smaller element

  for (int j = l; j < h; j++)
    if (vec[j] <= pivot) {  // If current element is <= pivot
      i++;
      std::swap(vec[i], vec[j]);
    }

  std::swap(vec[i + 1], vec[h]);  // Place pivot in correct position (pivot is sorted)
  return i + 1;                   // Return partition index
}

/**
 * @brief Transfer data from vector back to SLL
 * @param head Node *
 * @param arr vector<int>
 * @return Node *
 */
Node* Solution::vector_to_sll(Node* head, const std::vector<int>& arr) {
  Node* current = head;
  size_t i = 0;

  while (current && i < arr.size()) {
    current->data = arr[i++];
    current = current->next;
  }

  return head;  // Return the original head pointer
}
