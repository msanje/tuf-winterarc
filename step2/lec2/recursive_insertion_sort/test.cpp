#include <iostream>
using namespace std;

void insertion_sort(int arr[], int i, int n) {
  // base case
  // why is this condition the base case
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
  int arr[] = {3, 1, 2};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Before Insertion Sort" << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  insertion_sort(arr, 0, n);

  cout << "After Insertion Sort" << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
