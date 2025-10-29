#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Problem Statement
// Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array.
// Example
// Input: prices = {1, 1, 0, 1 , 1, 1}
// Output: 3

void optimal_two(vector<int>& arr) {
  int consecutive_counter = 0;
  int max_val = 0;

  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == 1) {
      consecutive_counter++;
      max_val = max(max_val, consecutive_counter);
    } else {
      consecutive_counter = 0;
    }
  }

  cout << "max_val: " << max_val << endl;
}

void optimal(vector<int>& arr) {
  int consecutive_counter = 0;
  int max_val = 0;

  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == 1) {
      consecutive_counter++;
      max_val = max(max_val, consecutive_counter);
    } else {
      consecutive_counter = 0;
    }
  }

  cout << max_val << endl;
}

void consecutive(vector<int> arr) {
  vector<int> temp_arr = {};
  int consecutive_counter = 0;

  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == 1) {
      consecutive_counter++;
    } else {
      consecutive_counter = 0;
    }
    temp_arr.push_back(consecutive_counter);
  }

  // for (int num : temp_arr) {
  //   cout << "num: " << num << endl;
  // }

  int max_val = *max_element(temp_arr.begin(), temp_arr.end());

  cout << max_val << endl;
}

int main() {
  vector<int> arr = {1, 1, 0, 1, 1, 1};
  vector<int> arr_two = {1, 0, 1, 1, 0, 1};

  // consecutive(arr_two);
  // optimal(arr_two);
  optimal_two(arr);
}
