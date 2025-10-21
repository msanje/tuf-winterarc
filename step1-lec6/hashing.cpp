#include<iostream>
#include<fstream>
#include<map>
using namespace std;

int main() {
  ifstream fin("input.txt");
  if (!fin) {
    cerr << "Error opening file\n";
    return 1;
  }

  int n;
  fin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    fin >> arr[i];
  }

  // pre-compute
  map<int, int> mpp;
  for (int i = 0; i < n; i++) {
    mpp[arr[i]]++;
  }

  int q;
  fin >> q;
  while(q--) {
    int number;
    fin >> number;
    // fetch
    cout << mpp[number] << endl;
  }

  return 0;
}

// int main() {
//   ifstream fin("string_input.txt");
//   if (!fin) {
//     cerr << "Error opening file\n";
//     return 1;
//   }
//
//   string s;
//   fin >> s;
//
//   // precompute
//   // this is when we know that the given characters 
//   // are all lower case characters
//   // int hash[26] = {0}; 
//   // this is to cover all the characters 
//   int hash[256] = {0}; 
//   for (int i = 0; i < s.size(); i++) {
//     // hash[s[i] - 'a']++;
//     hash[s[i]]++;
//   }
//
//   int q;
//   fin >> q;
//
//   while (q--) {
//     char c;
//     fin >> c;
//     // fetch
//     // cout << hash[c-'a'] << endl; 
//     cout << hash[c] << endl; 
//   }
//
//   return 0;
// }
