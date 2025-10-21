#include<iostream>
using namespace std;

/*
When recursive functions are called they're simultaneously stored in a recursive stack where they wait for the completion of the recursive function.
   A recursive function can only be completed if a base condition is fulfilled and the control returns to the parent function.
But if there is no base condition given for a particular recursive function, it gets called indefinitely which results in a Stack overflow .e., exceeding the memory assigned for recursive stack and hence the program terminates giving a Segmentation Fault error.
*/

// Given an integer N, write a program to print your name N times.

void recursive_fn(int n) {
  if (n == 0) return; // our base case

  cout << "Sanjay" << "\n"; // what this function is actually doing

  recursive_fn(n - 1); // recursive call
}


void print_one_to_n(int n) {
  // base case
  if (n == 0) return;

  // recursive call
  print_one_to_n(n - 1);

  // what the function actually needs to do
  // cout << n - (n - 1) << "\n";
  cout << n << "\n";
}

void print_numbers(int current, int n) {
  if (current > n) return;

  cout << current << "\n";

  print_numbers(current + 1, n);
}

// void print_one_to_n_with_curent(int current, int n) {
void print_one_to_n_with_curent(int n) {
  // if (current > n) return;
  if (n == 0) return;

  // print_one_to_n_with_curent(current + 1, n);
  print_one_to_n_with_curent(n - 1);

  // cout << current << "\n";
  cout << n << "\n";
}


void print_n_to_one(int n) {
  if (n == 0) return;

  cout << n << "\n";

  print_n_to_one(n - 1);
}

int sum_first_n_numbers_functional(int n) {
  if (n == 0) return 0;

  int result = n + sum_first_n_numbers_functional(n - 1);

  return result;
}

void sum_first_n_numbers_parameterized(int n, int sum) {
  if (n < 1) {
    cout << sum << "\n";
    return;
  };

  sum_first_n_numbers_parameterized(n - 1, sum+n);
}

void sum_of_first_n_numbers_for_loop(int n) {
  int result = 0;
  for (int i = 1; i <= n; i++) {
    result += i;
  }
  
  cout << "result: " << result << "\n";
}

int factorial(int n) {
  if (n == 0) return 1;
  int result = n;

  result *= factorial(n - 1);
  
  return result;
}

void printArray(int ans[], int n) {
  cout << "The reversed array is:- " << endl;
  for (int i = 0; i < n; i++) {
    cout << ans[i] << " ";
  }
}

void reverse_array(int n, int arr[]) {
  int ans[n];
  for (int i = n - 1; i >= 0; i--) {
    ans[n - i - 1] = arr[i];
  }
  printArray(ans, n);
}

int main() {
  int n;
  cin >> n;
  // recursive_fn(n);
  // print_one_to_n(n);
  // print_one_to_n_with_curent(n);
  // print_numbers(1, n);
  // print_n_to_one(n);
  // int result= sum_first_n_numbers_functional(n);
  // cout << "result: " << result << "\n";
  // sum_first_n_numbers_parameterized(n, 0);
  // sum_of_first_n_numbers_for_loop(n);
  // int result = factorial(n);
  // cout << "result: " << result << "\n";
  // cout << "expected: " << "120 "<< "\n";
  int arr[] = {5, 4, 3, 2, 1};
  reverse_array(n, arr);
}

