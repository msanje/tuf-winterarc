#include <iostream>
using namespace std;

void problem_one(vector<int> arr, int n) {
  sort(arr.begin(), arr.end());

  cout << arr[n - 1] << endl;
}

int main() {
  vector<int> arr = { 10, 19, 12, 16, 4, 9, 3 };
  int n = arr.size();

  problem_one(arr, n);
}


