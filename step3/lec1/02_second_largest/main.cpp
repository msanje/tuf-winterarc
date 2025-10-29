#include <iostream>
using namespace std;

void problem_two(vector<int> arr, int n) {
  sort(arr.begin(), arr.end());

  cout << arr[1] << " " << arr[n - 2] << endl;
}

void problem_two_approach_two(vector<int> arr, int n) {
  int smallest = INT_MAX;
  int largest = INT_MIN;
 
  // how to get the smallest and the largest
  // in just single traversal 
  for (int num : arr) {
    if (num < smallest) {
      smallest = num;
    }

    if (num > largest) {
      largest = num;
    }
  }


  int second_smallest = INT_MAX;
  // traverse the array and find an element that is just greater than the smallest element we just found.
  // i think we can solve for this with a for loop.
  for (int num : arr) {
    if (num > smallest && num < second_smallest) {
      second_smallest = num;
    }
  }


  int second_largest = INT_MIN;

  // traverse the array and find an element that is just smaller than the largest element we just found 
  for (int num : arr) {
    // how to get the just greater element then the smallest ?
    if (num < largest && num > second_largest) {
      second_largest = num;
    } 
  }

  cout << "smallest: " << smallest << endl;
  cout << "largest: " << largest << endl;
  cout << "second_smallest: " << second_smallest << endl;
  cout << "second_largest: " << second_largest << endl;
}

void find_smallest(vector<int> arr, int n) {
  int small = INT_MAX, second_small = INT_MAX;

  for (int num : arr) {
    if (num < small) {
      second_small = small;
      small = num;
    } else if (num < second_small && num != small) {
      second_small = num;
    }
  }

  cout << "second_small: " << second_small << endl;
  cout << "small: " << small << endl;
}

void find_largest(vector<int> arr, int n) {
  int large = INT_MIN, second_large = INT_MIN; 

  for (int num : arr) {
    if (num > large) {
      second_large = large;
      large = num;
    } else if (num > second_large && num != large) {
      second_large = num;
    }
  }

  cout << "second_large: " << second_large << endl;
  cout << "large: " << large << endl;
}


int main() {
  vector<int> arr = {12, 9, 4, 3, 32, 7};
  int n = 6;

  // problem_two(arr, n);
  // problem_two_approach_two(arr, n);
  find_smallest(arr, n);
  find_largest(arr, n);
}
