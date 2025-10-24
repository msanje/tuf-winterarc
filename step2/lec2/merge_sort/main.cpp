#include <iostream>
using namespace std;

// iterative method 


// recursive method


void merge_sort(int arr[], int mid) {
  for (int i = 0; i < arr.size(); i++) {
    cout <<"it: " << it << endl;
  }  

  // vector<int> first_half(arr.begin(), arr.begin() + mid); 
  // vector<int> second_half(arr.begin() + mid, arr.end());
  //
  // cout << "first_half: " << first_half << endl;
  // cout << "second_half: " << second_half << endl;
}

int main() {
  vector<int> arr = {3, 1, 2};
  int mid = arr.size() / 2;

  merge_sort(arr, mid);
}
