#include "algorithms.h"
#include<iostream>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2) {
  if (p1.second < p2.second) return true;
  if (p1.second > p2.second) return false;
  
  // from here both are the same

  if (p1.first > p2.first) return true;
  // we are not going to write another if like below
  //   because when they are the same also we want to 
  //   do the same thing
  // if (p1.first < p2.first) return false;
  return false;
}

void explainExtra() {
  // // sorting any given array
  // sort(a, a + n);
  // // for vector
  // sort(v.begin(), v.end());
  //
  // // sorting a particular portion
  // sort(a+2, a+4);
  //
  // // sorting in descending order
  // sort(a, a+n, greater<int>);
  
  // sorting in a particular way
  pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
  int n = sizeof(a) / sizeof(a[0]);

  // sort the above according to the second element.
  // if second element is same, then sort
  //  it according to first element but in descending.
  
  sort(a, a+n, comp);

  for (int i = 0; i < n; i++) {
    cout << "(" << a[i].first << ", " << a[i].second << ") ";
  }
  cout << "\n";


  // int num = 7; // binary of 7 is 111
  // this gives how many 1's are there (how many set bits)
  // int cnt = __builtin_popcount(num);
  // cout <<  "cnt: " << cnt;
  // cout << "\n";


  long long num = 165786578687;
  // when the number is long long
  // __builtin_popcount becomes __builtin_popcountll
  int cnt = __builtin_popcountll(num);
  cout <<  "cnt: " << cnt;
  cout << "\n";

  string s = "123";
  // if we had 231 the result would only contain only the 
  //  next permutations not all the permutations of the given string
  // we can fix the issue by doing this
  sort(s.begin(), s.end());

  // gives us all the permutations of the string "123"
  do {
    cout << s << endl;
  } while(next_permutation(s.begin(), s.end()));

  int b[4] = {1, 2, 3, 4};
  int m = sizeof(b) / sizeof(b[0]);

  // finding the max element 
  int maxi = *max_element(b,b+m);
  cout << maxi << "\n";

  // similarily there's min as well
}

