#include<iostream>
#include<map>
#include<fstream>
using namespace std;

int count_freq(int n, int arr[]) {
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == n) {
      cnt++;
    };
  }
  
  return cnt;
}

// Input 
// 10 5 10 15 10 5
int main() {
  ifstream fin("frequency.txt");
  if (!fin) {
    cerr << "Error opening file\n";
    return 1;
  }

  vector<int> input;

  int x;
  while (fin >> x) {
    input.push_back(x);
  }

  // Contents of input vector
  // cout << "Contents of input vector" << endl; 
  // for (auto it:input) {
  //   cout << it << endl;
  // }

  int n = input.size(); 
  int arr[n];

  for (int i = 0; i < n; i++) {
    arr[i] = input[i]; 
  }

  // Contents of input arr
  // cout << "Contents of input arr" << endl;
  // for (int i = 0; i < n; i++) {
  //   cout << "arr[i]: " << arr[i] << endl; 
  // }

  map<int, int> mpp;
  for (int i = 0; i < n; i++) {
    mpp[arr[i]]++;
  }

  for (auto it:mpp) {
    cout << it.first << " " << it.second << endl;
  }
}


/*
Example 1:

Input: arr[] = {10, 5, 10, 15, 10, 5};
Output: 
10 3
5 2  
15 1
*/
