#include <iostream>
using namespace std;

// Problem Statement
// You are given an array of integers, your task is to move all the zeros in the array to the end of the array and move non-negative integers to the front by maintaining their order.
// Example:
// Input, 1, 0, 2, 3, 0, 4, 0, 1
// Output: 1, 2, 3, 4, 1, 0, 0, 0

#include <iostream>
using namespace std;

// Problem Statement
// // You are given an array of integers, your task is to move all the zeros in the array to the end of the array and move non-negative integers to the front by maintaining their order.
// Example:
// Input, 1, 0, 2, 3, 0, 4, 0, 1
// Output: 1, 2, 3, 4, 1, 0, 0, 0


void optimal(vector<int>& nums) {
  // Pointer to the first zero
  int j = -1;

  // Find the first zero
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == 0) {
      j = i;
      break;
    }
  }

  // If no Zero found, return
  if (j == -1) return;
  
  // Start from the next index of first zero
  for (int i = j + 1; i < nums.size(); i++) {
    // If current element is non-zero
    if (nums[i] != 0) {
      // Swap with nums[j]
      swap(nums[i], nums[j]);
      // Move j to next zero
      j++; 
    } 
  }

  for (int num : nums) {
    cout << num << " ";
  }
  cout << endl;
}


void move_zeros(vector<int>& arr) {
  int n = arr.size();
  
  for (int i = 0; i < n; i++) {
    if (arr[i] == 0) {
      arr.push_back(arr[i]);
      arr.erase(arr.begin() + i);
    }
    // cout << arr[i] << endl;
  }

  for (int num : arr) {
    // cout << "num: " << num << endl;
    cout << num << " "; 
  }
  cout << endl;
}

int main() {
  vector<int> arr = {1, 0, 2, 3, 0, 4, 0, 1};

  // move_zeros(arr);
  optimal(arr);
}
