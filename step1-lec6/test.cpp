#include<iostream>
#include<fstream>
#include<map>
#include<unordered_map>
using namespace std;

int main() {
  int arr[] = {7, 3, 7, 2, 3, 7, 4, 2, 4, 4};

  // map<int, int> mpp;
  unordered_map<int, int> mpp;
  for (int i = 0; i < 10; i++) {
    mpp[arr[i]]++;
  }

  int minFreq = INT_MAX, maxFreq = INT_MIN;
  int minEle, maxEle; 

  for (auto it : mpp) {
    if (it.second < minFreq) {
      minFreq = it.second;
      minEle= it.first;
    }
    if (it.second > maxFreq) {
      maxFreq = it.second;
      maxEle = it.first;
    }
  }

  cout << minEle << " " << maxEle << endl;
}
