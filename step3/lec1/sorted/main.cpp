#include <iostream>
#include <string>
using namespace std;

// Problem statement 
// Given an array of size n, write a program to check if the given array is sorted in order or not. (No matter which order)
// If the array is sorted then return True, Else return False.


// this doesn't work for decreasing order
bool isSorted(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1]) {
      return false;
    }
  }

  return true;
}

bool is_sorted(vector<int>& arr, int n) {
  vector<string> result_arr;

  for (int i = 0; i < n; i++) {
    if (i == n - 1) {
      break;
    }

    // {5, 4, 4, 3, 2, 1} - why does this fails
    // how to fix this ?
    // if (arr[i] <= arr[i+1])  {
    //   result_arr.push_back("ascending");
    // } else if (arr[i] >= arr[i+1]) {
    //   result_arr.push_back("descending");
    // }
    if (arr[i] < arr[i+1])  {
      result_arr.push_back("ascending");
    } else if (arr[i] > arr[i+1]) {
      result_arr.push_back("descending");
    }
  }

  // for (auto str : result_arr) {
  //   cout << "str: " << str << endl;
  // }

  int result = 1;
  int result_arr_len = result_arr.size();
  for (int i = 0; i < result_arr_len - 1; i++) {
    if (result_arr[i] != result_arr[i + 1]) {
      result = 0;
      break;
    }
  }

  return result;
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6};
  vector<int> arr_two = {1, 9, 6, 2, 4, 3};
  vector<int> arr_three = {5, 4, 3, 2, 1, 0};
  vector<int> arr_four = {1, 2, 2, 3, 4, 5};
  // fails 
  vector<int> arr_five = {5, 4, 4, 3, 2, 1};
  // fails 
  vector<int> arr_six = {2, 2, 2, 2, 3, 3};
  vector<int> arr_seven = {5, 4, 6, 7, 8};

  int n = 6;

  // int test_arr[] = {1, 2, 3, 4, 5, 6};
  int test_arr[] = {1, 2, 2, 4, 5, 6};
  // int test_arr[] = {1, 2, 3, 4, 5, 0};
  // int test_arr[] = {6, 5, 4, 3, 2, 1};

  bool result = isSorted(test_arr, n);
  cout << result << endl;

  // bool result = is_sorted(arr, n);
  // cout << "result: " << result << " expecting: " << "sorted" << endl;
  //
  // bool result_two = is_sorted(arr_two, n);
  // cout << "result: " << result_two << " expecting: " << "not-sorted" << endl;
  //
  // bool result_three = is_sorted(arr_three, n);
  // cout << "result: " << result_three << " expecting : " << "sorted" << endl;
  //
  // bool result_four = is_sorted(arr_four, n);
  // cout << "result: " << result_four << " expecting : " << "sorted" << endl;
  //
  // bool result_five = is_sorted(arr_five, n);
  // cout << "result: " << result_five << " expecting : " << "sorted" << endl;
  //
  // bool result_six = is_sorted(arr_six, n);
  // cout << "result: " << result_six << " expecting : " << "sorted" << endl;
  //
  // bool result_seven = is_sorted(arr_seven, n);
  // cout << "result: " << result_seven << " expecting : " << "not-sorted" << endl;
  //
  


}
