#include <iostream>
using namespace std;


// Approach One

void rotate_right(vector<int>& arr, int n, int k) {
  if (n == 0) return;

  k = k % n;

  if (k > n) return;

  int temp[k];

  for (int i = 0; i < k; i++) {
    temp[i] = arr[i];
  }

  for (int i = k; i < n; i++) {
    // cout << "i: " << i << endl;

    int result = (i - k + n) % n;
    // cout << "result: " << result << endl;
    arr[result] = arr[i];
  
    // cout << "arr[i]: " << arr[i] << endl;
    // arr[] = arr[i];
  }

  // add the temp k elements back to the arr
  for (int i = n - k; i < n; i++) {
    // cout << "i: " << i << endl;
    int index = i - n + k;
    arr[i] = temp[index];
  }

  for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
  }
  cout << endl;

  // for (int i = 0; i < k; i++) {
  //   cout << "temp[i]: " << temp[i] << endl;
  // }
}

void rotate_left(vector<int> & arr, int n, int k) {
  if (n == 0) return;

  k = k % n;

  if (k > n) return;

  int temp[k];

  for (int i = n - k; i < n; i++) {
    temp[i - n + k] = arr[i];
  }

  for (int i = n - k - 1; i >= 0; i--) {
    arr[i + k] = arr[i];
  }

  for (int i = k - 1; i >= 0; i--) {
    arr[i] = temp[i]; 
  }

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// Approach Two

void reverse_left(vector<int>& arr, int start, int end) {
  while (start < end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

void rotate_left_approach_two(vector<int>& arr, int n, int k) {
  reverse_left(arr, n - k, n - 1);
  reverse_left(arr, 0, n - k - 1);
  reverse_left(arr, 0, n - 1);
}

void reverse_right(vector<int>& arr, int start, int end) {
  while (start < end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

void rotate_right_approach_two(vector<int>& arr, int n, int k) {
  reverse_right(arr, 0, k - 1);
  reverse_right(arr, k, n - 1);
  reverse_right(arr, 0, n - 1);
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6};
  vector<int> arr_two = {1, 2, 3, 4, 5, 6};
  vector<int> arr_three = {1, 2, 3, 4, 5, 6};
  vector<int> arr_four = {1, 2, 3, 4, 5, 6};
  int n = 6;
  int k = 2;

  
  cout << "Approach One: " << endl;

  cout << "Rotate right result: " << endl;
  rotate_right(arr, n, k);
  cout << endl;

  cout << "Rotate left result: " << endl;
  rotate_left(arr_two, n, k);
  cout << endl;

  cout << "Approach Two: " << endl;

  cout << "Rotate right result: " << endl;
  rotate_right_approach_two(arr_three, n, k);
  for (int i = 0; i < n; i++) {
    cout << arr_three[i] << " ";
  }
  cout << endl;
  cout << endl;

  cout << "Rotate left result: " << endl;
  rotate_left_approach_two(arr_four, n, k);
  for (int i = 0; i < n; i++) {
    cout << arr_four[i] << " ";
  }
  cout << endl;

}
