#include <iostream>
using namespace std;

// Problem Statement
// Given an array of integers, rotating array of elements by 
// k elements either left or right.
// Example 1:
// Input: N = 7, array[] = {1, 2, 3, 4, 5, 6, 7}, k=2, right
// Output: 6 7 1 2 3 4 5
// Explanation: array is rotated to right by 2 position.

// Example 2:
// Input: N = 6, array[] = {3, 7, 8, 9, 10, 11}, k=3, left
// Output: 9 10 11 3 7 8
// Explanation: Array is rotated to right by 3 position.


// Rotating right

// Approach One
void rotate_one(vector<int>& arr, int n, int k) {
  if (n == 0) return;
  
  k = k % n;
  if (k > n) return;

  int temp[k];
  for (int i = n - k; i < n; i++) {
    // cout << i - n + k << endl;
    temp[i - n + k] = arr[i]; 
  }
  for (int i = n - k - 1; i >= 0; i--) {
    arr[i + k] = arr[i];
  }
  for (int i = 0; i < k; i++) {
    arr[i] = temp[i];
  }

  
  // for (int i = 0; i < n; i++) {
  //   cout << arr[i] << endl;
  // }
}


// Approach 2

// Step 1: Reverse the last k elements of the array
// Step 2: Reverse the first n-k elements of the array.
// Step 3: Reverse the whole array
// For Eg, arr[]={1, 2, 3, 4, 5, 6, 7}, k=2

void reverse(int arr[], int start, int end) {
  while (start <= end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

void rotate_right(int arr[], int n, int k) {
  // Reverse the last k elements of the array
  reverse(arr, n - k, n - 1); 
  // Reverse the first n-k elements of the array.
  reverse(arr, 0, n - k - 1); 
  // Reverse the whole array
  reverse(arr, 0, n - 1);
}


// Rotating left 

// Approach One
// void rotate_two(vector<int> arr, int n, int k) {
//   if (n == 0) return;
//
//   k = k % n;
//   if (k > n) return;
//
//   int temp[k];
//   for (int i = n - k; i < n; i++) {
//     // cout << i - n + k << endl;
//     temp[i - n + k] = arr[i]; 
//   }
//   for (int i = n - k - 1; i >= 0; i--) {
//     arr[i + k] = arr[i];
//   }
//   for (int i = 0; i < k; i++) {
//     arr[i] = temp[i];
//   }
//
// }
//
// void reverse_two(int arr[], int start, int end) {
//   while (start <= end) {
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;
//     start++;
//     end--;
//   }
// }
//
// // arr = {1, 2, 3, 4, 5, 6}, n = 6, k = 2.
// void rotate_left(int arr[], int n, int k) {
//   // Reverse the last k elements of the array
//   reverse_two(arr, n - k, n - 1); 
//   // Reverse the first n-k elements of the array.
//   reverse_two(arr, 0, n - k - 1); 
//   // Reverse the whole array
//   reverse_two(arr, 0, n - 1);
// }
//

int main() {
  int n = 6;
  int k = 2;
  vector<int> arr = {1, 2, 3, 4, 5, 6};
  int arr_two[] = {1, 2, 3, 4, 5, 6};

  
  // cout << "Rotating Left: " << endl;
  // rotate_two(arr, n, k);
  // rotate_left(arr_two, n, k);
  //
  // for (int i = 0; i < n; i++) {
  //   cout << arr[i] << " ";
  // }
  // cout << endl;
  //
  // for (int i = 0; i < n; i++) {
  //   cout << arr_two[i] << " ";
  // }
  // cout << endl;

  cout << "Rotating Right: " << endl;

  rotate_one(arr, n, k);
  rotate_right(arr_two, n, k);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  for (int i = 0; i < n; i++) {
    cout << arr_two[i] << " ";
  }
  cout << endl;
}
