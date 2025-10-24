#include <iostream>
using namespace std;

// Time complexity
// O(N^2) for the worst and average case
void insertion_sort(int arr[], int i, int n) {
  // Base case: i == n.
  if (i == n) return;

  int j = i;
  while (j > 0 && arr[j - 1] > arr[j]) {
    int temp = arr[j - 1];
    arr[j - 1] = arr[j];
    arr[j] = temp;
    j--;
  }

  insertion_sort(arr, i + 1, n);
}

int main() {
  int arr[] = {13, 46, 24, 52, 20, 9};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Before Using insertion Sort: " << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  insertion_sort(arr, 0, n);

  cout << "After Using insertion Sort: " << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
