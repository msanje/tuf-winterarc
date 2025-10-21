#include<iostream>
#include<map>
#include<fstream>
#include<vector>
using namespace std;

void find_high_low_ele() {
  ifstream fin("frequency.txt");
  if (!fin) {
    cerr << "Error opening file\n";
    return;
  }

  vector<int> input;

  int x;
  while (fin >> x) {
    input.push_back(x);
  }

  int n = input.size(); 
  int arr[n];

  for (int i = 0; i < n; i++) {
    arr[i] = input[i]; 
  }

  map<int, int> mpp;
  for (int val : arr) {
    mpp[val]++;
  }

  // INT_MAX -> the largest possible value an int can hold
  // INT_MIN -> the smallest possible value an int can hold 
  int minFreq = INT_MAX, maxFreq = INT_MIN;
  int minEle, maxEle;

  for (auto it : mpp) {
    if (it.second < minFreq) {
      minFreq = it.second;
      minEle = it.first;
    }
    if (it.second > maxFreq) {
      maxFreq = it.second;
      maxEle = it.first;
    }
  }

  cout << maxEle << endl;
  cout << minEle << endl;
}

int main() {
  find_high_low_ele();
}

/*
Example 1:
Input: array[] = {10, 5, 10, 15, 10, 5};
Output: 10 15
*/
