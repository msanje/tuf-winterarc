#include<iostream>
#include<fstream>
#include<string>
#include<map>
using namespace std;


// time complexity
// this function has a for loop that runs n number of times
// so the time complexity of the function will be O(N)
// ignoring the other constant operations
//
// Now if were to do this for Q number of queries.
// Then the time complexity wil be O(5*N)
// If the number of queries is Q, the time complexity
// will be O(Q*N)
//
// Now if the lenght of the query becomes large like 10^5
// and if also the length of the array becomes 10^5
// the time complexity willbe O(10^10)
//
// For what we've learned earlier that 10^8 opertaions take 1 second 
// to get executed.
// So, 10^10 operations will take around 100 seconds (10^10/10^8)
// We cannot say that a code is good if it takes 100 seconds
// to get executed.

int brute_force(int number, int a[], int n) {
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == number) {
      cnt = cnt+1;
    }
  }

  return cnt;
};


// Optimized approach using Hashing
// The defining of hashing in a naive way, it is nothing 
// but a combination of two steps, pre-storing and fetching.

int hash_method() {
  ifstream fin("input.txt");
  if (!fin) {
    cerr << "Error opening file\n";
    return 1;
  }

  int n;
  // cin >> n;
  fin >> n; 
  int arr[n];
  for (int i = 0; i < n; i++) {
    // cin >> arr[i];
    fin >> arr[i]; 
  }

  // precompute
  int hash[13] = {0};
  for(int i = 0; i < n; i++) {
    hash[arr[i]] += 1;
  }

  int q;
  // cin >> q;
  fin >> q;
  while(q--) {
    int number;
    // cin >> number;
    fin >> number; 

    // fetch
    cout << hash[number] << endl; 
  }

  fin.close();
  return 0;
}

// Character hashing
int brute_force_char(char c, char a[], int n) {
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == c) {
      cnt++;
    }
  }

  return cnt;
}

// Optimized approach using Hashing

int hash_method_char() {
  ifstream fin("string_input.txt");
  if (!fin) {
    cerr << "Error opening file\n";
    return 1;
  }

  string s;
  // cin >> n;
  fin >> s;


  // int arr[n];
  // for (int i = 0; i < n; i++) {
  //   // cin >> arr[i];
  //   fin >> arr[i]; 
  // }

  // precompute
  int hash[26] = {0};
  for(int i = 0; i < s.size(); i++) {
    hash[s[i] - 'a']++;
  }

  int q;
  // cin >> q;
  fin >> q;
  while(q--) {
    char c;
    // cin >> number;
    fin >> c; 

    // fetch
    cout << hash[c - 'a'] << endl; 
  }

  fin.close();
  return 0;
}


int hash_method_char_both() {
  ifstream fin("string_input.txt");
  if (!fin) {
    cerr << "Error opening file\n";
    return 1;
  }

  string s;
  // cin >> n;
  fin >> s;


  // int arr[n];
  // for (int i = 0; i < n; i++) {
  //   // cin >> arr[i];
  //   fin >> arr[i]; 
  // }

  // precompute
  int hash[256] = {0};
  for(int i = 0; i < s.size(); i++) {
    hash[s[i] - 'a']++;
  }

  int q;
  // cin >> q;
  fin >> q;
  while(q--) {
    char c;
    // cin >> number;
    fin >> c; 

    // fetch
    cout << hash[c - 'a'] << endl; 
  }

  fin.close();
  return 0;
}

int hash_method_with_map() {
  ifstream fin("map_input.txt");
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

  // precompute
  map<int, int> mpp; 
  for(int i = 0; i < n; i++) {
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

  fin.close();
  return 0;

}

// Time complexity of map data structure
// The total time complexity will be O(N * time taken by map data structure)
// Storing and fetching in a C++ map, both take O(logN) time complexity, where N is the size of the map. 
// But unordered map take O(1) time complexity to perform both storing and fetching.
// But in the worst case, this time complexity will be O(N) for unorderd_map. Now, the worst case happens very very rarely. It almost never happens and most of the time, we will be using unorderd_map
// If the unordered_map gives a time limit exceeded error (TLE), we will then use map.
// The time complexity in the worst case is O(N) because of the internal collision. 

int main() {
  // int arr[] = {1, 2, 3, 5, 5};
  // int result = brute_force(5, arr);
  // cout << result << endl;

  // hash_method();

  // char s[] = {'a', 'b', 'c', 'd', 'a', 'b', 'e', 'a', 'c'};
  // int n = 9;
  // int result = brute_force_char('a', s, n);
  // cout << result << endl;

  // hash_method_char();
  // hash_method_char_both();
  hash_method_with_map();
}



