#include <iostream>
using namespace std;

// Apporoach one
void rotate_one(vector<int>& arr, int n, int k) {
  if (n == 0) return;
  
  k = k % n;
  if (k > n) return;

  int temp[k];
  for (int i = n - k; i < n; i++) {
    // cout << i - n + k << endl;
    temp[i - n + k] = arr[i]; 
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "At the end of first for loop " << endl;
  cout << endl;


  for (int i = n - k - 1; i >= 0; i--) {
    arr[i + k] = arr[i];
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "At the end of second for loop " << endl;
  cout << endl;

  for (int i = 0; i < k; i++) {
    arr[i] = temp[i];
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "At the end of the third for loop " << endl;
  cout << endl;
}



void rotate(int arr[], int start, int end) {
  while (start < end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}


void rotate_left(int arr[], int n, int k) {
  // reverse the last k number of elements
  rotate(arr, n - k, n - 1);
  // reverse the first n - k number of elements
  rotate(arr, 0, n - k - 1);
  // reverse the entire array
  rotate(arr, 0, n - 1);
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6};
  vector<int> arr_two = {1, 2, 3, 4, 5, 6};
  int n = 6;
  int k = 2;

  rotate_one(arr_two, n, k);

  rotate_left(arr, n, k);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
