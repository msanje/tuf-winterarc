#include <iostream>
using namespace std;

// Time Complexity
// O(N^2) for Worst and Average Case

void bubble_sort(int arr[], int n) {
  // Base case
  if (n == 1) {
    return;
  }

  for (int j = 0; j <= n - 2; j++) {
    if (arr[j] > arr[j + 1]) {
      int temp = arr[j + 1];
      arr[j + 1] = arr[j];
      arr[j] = temp;
    }
  }

  bubble_sort(arr, n - 1);
}

int main() {
  int arr[] = {13, 46, 24, 52, 20, 9};
  // int n = 6;
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Before using Bubble Sort: " << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  
  bubble_sort(arr, n);

  cout << "After using Bubble Sort: " << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
