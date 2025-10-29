#include <iostream>
#include <map>
using namespace std;

// Problem Statement
// Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.
// Example
// Input: arr[] = {2, 2, 1}
// Result: 1
// In this array, only the element 1 appear once and so it is the answer


// {4, 1, 2, 1, 2}
int optimal_approach(vector<int>& arr) {
  int n = arr.size();

  int xorr = 0;
  for (int i = 0; i < n; i++) {
    xorr = xorr ^ arr[i];
    cout << "xorr: " << xorr << endl;
  }

  return xorr;
}

int appears_once_with_nested_loop(vector<int>& arr) {
  int n = arr.size();

  for (int i = 0; i < n; i++) {
    int num = arr[i];
    int counter = 0;

    for (int j = 0; j < n; j++) {
      if (arr[j] == num) {
        counter++;
      }
    }

    if (counter == 1) return num;
  }

  return -1;
}

void appears_once(vector<int>& arr) {
  map<int, int> result;

  for (int i = 0; i < arr.size(); i++) {
    // result.insert({arr[i], 1});
    result[arr[i]]++; 
  }

  // for (auto num : result) {
  //   cout << num.first << " : " << num.second << endl;
  // }

  for (auto p: result) {
    if (p.second == 1) {
      cout << p.first << endl;
      break;
    }
  }

  // auto minKey = result.begin()->first;
  // cout << minKey << endl;
  //
  // auto minVal = result.begin()->second;
  // cout << minVal << endl;
}

int main() {
  vector<int> arr = {2, 2, 1};
  vector<int> arr_two = {4, 1, 2, 1, 2};

  // appears_once(arr);
  // appears_once(arr_two);
  // int result = appears_once_with_nested_loop(arr);
  // cout << result << endl;
  
  // optimal approach
  optimal_approach(arr_two);
}
