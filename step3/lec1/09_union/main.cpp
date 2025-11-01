#include <iostream>
#include <map>
#include <set>
using namespace std;

// Problem Statement:
// Given two sorted arrays arr1 and arr2 of size n and m. Find the union of two sorted arrays.
// Note: Elements in the union should be in ascending order.

void find_union(vector<int>& arr1, vector<int>& arr2, int n, int m) {
  set<int> result;
  
  for (int num : arr1) {
    // set insert costs O(log N)
    result.insert(num);
  }

  for (int num : arr2) {
    // set insert costs O(log N)
    result.insert(num);
  }

  for (int num : result) {
    cout << num << " ";
  }
  cout << endl;
}

int main() {
  // int n = 5;
  // int m = 5;
  // vector<int> arr1 = {1, 2, 3, 4, 5};
  // vector<int> arr2 = {2, 3, 4, 4, 5};

  int n = 10; 
  int m = 7;
  vector<int> arr1 = {1,2,3,4,5,6,7,8,9,10};
  vector<int> arr2 = {2,3,4,4,5,11,12};

  find_union(arr1, arr2, n, m); 
}

