#include <iostream>
using namespace std;

// Problem statement
// Given an array of N integers, left rotate the array by one place.
// Example:
// Input: N = 5, array[] = {1, 2, 3 ,4, 5}
// Output: 2, 3, 4, 5, 1

void rotate(vector<int>& arr, int n) {
  arr.push_back(arr[0]);
  arr.erase(arr.begin());
  // arr.push_back(7);
  // cout << "arr[0]: " << arr[0] << endl;

  for (int num : arr) {
    cout << num << " ";
  }
  cout << endl;

  // for (int i = 0; i < n; i++) {
  //   cout << arr[i] << endl;
  // }
}

void optimal(vector<int>& arr, int n) {
  int temp = arr[0];

  for (int i = 0; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }

  arr[n - 1] = temp;

  for (int num : arr) {
    cout << num << " ";
  }
  cout << endl;
}

int main() {
  int n = 5;
  vector<int> arr = {1, 2, 3, 4, 5};

  // rotate(arr, n);
  optimal(arr, n);
}
