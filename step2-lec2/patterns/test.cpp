#include <iostream>
using namespace std;

// Pattern 1
/*
5
5 4
5 4 3
5 4 3 2 
5 4 3 2 1
*/
void pattern_one(int n) {
  for (int i = 5; i > 0; i--) {
    for (int j = 5; j >= i; j--) {
      cout << j << " ";
    }
    cout << "\n";
  }
}


// Pattern 2
/*
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5
*/
void pattern_two(int n) {
  for (int i = 5; i > 0; i--) {
    for (int j = i; j <= n; j++) {
      cout << j << " ";
      // cout << "j: " << j; 
    }
    cout << "\n";
  }
}


int main() {
  int n;  
  cin >> n;

  // pattern_one(n);
  pattern_two(n);
}

