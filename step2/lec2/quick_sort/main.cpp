#include <iostream>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
  int pivot = arr[high];

  int i = low - 1;

  for (int j = low; j < high; j++) {
    if (arr[j] < arr[j + 1]) {
      i++;
      swap(arr[i], arr[j]);
    }
  }

  swap(arr[i + 1], arr[high]);

  return i + 1;
}

void quick_sort(vector<int>& arr, int low, int high) {
  if (low < high) {
    int pivotIndex = partition(arr, low, high);

    quick_sort(arr, low, pivotIndex - 1);

    quick_sort(arr, pivotIndex + 1, high);
  }
}

int main() {
  vector<int> arr = {3, 1, 2};

  cout << "Before Quick Sort" << endl;
  for (int num : arr) {
    cout << num << " ";
  }
  cout << endl;

  quick_sort(arr, 0, 2);

  cout << "After Quick Sort" << endl;
  for (int num : arr) {
    cout << num << " ";
  }
  cout << endl;
}
