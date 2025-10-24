#include <iostream>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
  vector<int> temp;
  int left = low;
  int right = mid + 1;

  // Merge two sorted halves
  while (left <= mid && right <= high) { // what's up with this condition what does this do
    if (arr[left] <= arr[right]) {
      temp.push_back(arr[left++]);
    } else {
      temp.push_back(arr[right++]);
    }
  }

  // Copy remaining elements from left half
  while (left <= mid) {
    temp.push_back(arr[left++]);
  }


  // Copy remaining elements from right half
  while (right <= high) {
    temp.push_back(arr[right++]);
  }

  // Copy sorted elements back to original array
  for (int i = low; i <= high; i++) {
    arr[i] = temp[i - low];
  }
}

void merge_sort(vector<int>& arr, int low, int high) {
  if (low >= high) {
    return;
  }

  // divide the array into two halves recursively 
  int mid = low + high / 2;

  // Here the maximum element of the unsorted array reaches
  // the end of the unsorted array after each recursive call. 
  merge_sort(arr, low, mid);
  merge_sort(arr, mid + 1, high);

  merge(arr, low, mid, high);
}

int main() {
  vector<int> arr = {3, 1, 2};
  int low = 0;
  int high = 2;

  merge_sort(arr, low, high);
  for (int x : arr)
        cout << x << " ";
  cout << endl;
  return 0;
}
