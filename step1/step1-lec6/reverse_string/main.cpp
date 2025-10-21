#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

// Problem statement
// You are given an array. 
// The task is to reverse the array and print it

// Using an extra array.
void solution_one(int arr[], int n) {

  int result[n];
  for (int i = n - 1; i >= 0; i--) {
    result[i] = arr[(n - 1) - i]; 
  }

  cout << "[";
  for (int i = 0; i < n; i++) {
    cout << " " << result[i] << " ,";
  }
  cout << "]" << endl;
}


void printArray(int arr[], int n) {
  cout << "[";
  for (int i = 0; i < n; i++) {
    cout << " " << arr[i] << " ,";
  }
  cout << "]" << endl;
};

// Space-optimized iterative method
void solution_two(int arr[], int n) {
  int p1 = 0, p2 = n - 1;
  while (p1 < p2) {
    swap(arr[p1], arr[p2]);
    p1++; p2--;
  }
  printArray(arr, n);
}

// Recursive method
void solution_three(int arr[], int start, int end) {
  if (start < end) {
    swap(arr[start], arr[end]);
    solution_three(arr, start + 1, end - 1);
  }
}

// Libary function 
void solution_four(int arr[], int n) {
  reverse(arr, arr + n);
}


int main() {
  ifstream fin("input.txt");
  // ifstream fin("input_two.txt");
  if (!fin) {
    cerr << "Error opening file\n";
    return 1; 
  }

  vector<int> input;
  int x;

  while (fin >> x) {
    input.push_back(x);
  }

  int n = input.size();
  // cout << "n: " << n << endl;
  
  int arr[n];

  for (int i = 0; i < n; i++) {
    arr[i] = input[i];
  } 

  // for (auto it : input) {
  //   cout << "it: " << it << endl;
  // }

  // for (int i = 0; i < n; i++) {
  //   cout << "arr[i]:" << arr[i] << endl;
  // }

  // We have arr with all the input elements
  // int result[] = solution_one(arr, n);
  // solution_one(arr, n);
  // solution_two(arr, n);
  // solution_three(arr, 0, n - 1);
  // printArray(arr, n);
  solution_four(arr, n);
  printArray(arr, n);
}


// Examples:
//
// Input: N = 5, arr[] = {5, 4, 3, 2, 1}
// Output: {1, 2, 3, 4, 5}
//
// Input: N = 6, arr[] = {10, 20, 30, 40}
// Output: {40, 30, 20, 10}
