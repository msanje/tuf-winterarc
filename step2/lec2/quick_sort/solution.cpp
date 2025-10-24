#include <iostream>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
  // Choose the last element as pivot
  int pivot = arr[high];

  // Initialize i to place smaller elements
  // i = 0 - 1 -> i = -1
  int i = low - 1;
  // cout << "i: " << i << endl;

  // Traverse the array
  for (int j = low; j < high; j++) {
    // If element is smaller than or equal to pivot
    if (arr[j] <= pivot) {
      // Increment i and swap with j
      // why increment and why swap
      i++; 
      swap(arr[i], arr[j]);
    } 
  }

  // Place pivot in correct position
  swap(arr[i + 1], arr[high]);

  // Return pivot index
  return i + 1; 
}

void quicksort(vector<int>& arr, int low, int high) {
  // Base case: if low is not less than high
  if (low < high) {
    // Find pivot index after partitioning
    int pivotIndex = partition(arr, low, high); 

    // Recursively sort elements before pivot
    quicksort(arr, low, pivotIndex - 1);

    // Recursively sort elements after pivot
    quicksort(arr, pivotIndex + 1, high);
  }
}

int main() {
  vector<int> arr = {3, 1, 2};

  cout << "Before Quicksort" << endl;
  for (int num : arr) {
    cout << num << " ";
  }
  cout << endl;

  quicksort(arr, 0, arr.size() - 1);

  cout << "After Quicksort" << endl;
  for (int num : arr) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}
