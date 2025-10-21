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

// Pattern 3
/*
   A
  ABA
 ABCBA
ABCDCBA
*/ 

void pattern_three(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2 * n + i; j++) {
      cout << char('A' + j);
    }
    cout << "\n";
  }
}


int main() {
  int n;  
  cin >> n;

  // pattern_one(n);
  // pattern_two(n);
  pattern_three(n);
}



