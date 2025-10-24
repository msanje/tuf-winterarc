#include<iostream>
using namespace std;

// Get the lowest in the given array range
// move it to the front
// reduce the range my one
void selection_sort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int min = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }

    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }


  cout << "After selections sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

// Compare the adjacent pairs.
// Bubble up the first if it's greater then the second on in the pair.
// reduce the range.
// and repeat with the next pair
void bubble_sort(int arr[], int n) {
  for (int i = n - 1; i >= 0; i--) {
    for (int j = 0; j <= i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
      }
    }
  } 

  cout << "After bubble sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}
                                                 ;

// Select the first element
// As there's nothing on the left to compare this with.
// leave it at that as it's already sorted. If we look at just that.
// get the next elements compare that with this 
// move that to the left of the first element is it's 
// lower then the first/previous element
void insertion_sort(int arr[], int n) {
  for (int i = 0; i <= n - 1; i++) {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
      int temp = arr[j - 1];
      arr[j - 1] = arr[j];
      arr[j] = temp;
      j--;
    }
  }

  cout << "After insertion sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}


int main() {
  int arr[] = {13, 46, 24, 52, 20, 9};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Before Sorting : " << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";

  cout << "Selection Sort: " << endl;
  selection_sort(arr, n);

  cout << "Bubble Sort: " << endl;
  bubble_sort(arr, n);


  cout << "Insertion Sort: " << endl;
  insertion_sort(arr, n);
  return 0;
}
