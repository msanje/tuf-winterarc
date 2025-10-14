#include <iostream>
#include <string>
// #include<bits/stdc++.h>
using namespace std;


// Pattern 1
void print_squre_pattern(int n) {
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "* ";
    }
    cout << "\n";
  }
}


// Pattern 2
void left_triangle(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    cout << "\n";
  }
}


// Pattern 3
void left_triangle_num(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << j << " ";
    }
    cout << "\n";
  }
}


// Pattern 4
void left_triangle_same_num(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << i << " ";
    }
    cout << "\n";
  }
}


// Pattern 5
void left_reverse_triangle(int n) {
  for (int i = n; i > 0; i--) {
    for (int j = i; j > 0; j--) {
      cout << "*" << " ";
    }
    cout << "\n";
  }
}


// Pattern 6
void left_reverse_triangle_num(int n) {
  for (int i = n; i > 0; i--) {
    for (int j = 1; j <= i; j++) {
      cout << j << " ";
    }
    cout << "\n";
  }
}

// Pattern 7
void centered_pyramid(int n) { 
  for (int i = 1; i <= n; i++) {
    cout << string(n - i, ' ');
    cout << string(2 * i - 1, '*');
    cout << string(n - i, ' ');
    cout << "\n";
  }
}

void centered_pyramid_solution(int n) {
  for (int i = 1; i <= n; i++) {
    cout << string(n - i, ' ');
    cout << string(2 * i - 1, '*');
    cout << string(n - i, ' ');
    cout << "\n";
  }
}


// test function
void test(int n) {
  for (int i = n - 1; i >= 0; i--) {
    cout << "i: " << i;
  }
}

// Pattern 8
void reverse_centered_pyramid(int n) {
  for (int i = n; i > 0; i--) {
    // cout << "i: " << i << "\n";
    cout << string(n - i, ' ');
    cout << string(2 * i - 1, '*');
    cout << string(n - i, ' ');
    cout << "\n";
  }
  cout << "\n";
}

// Pattern 9
void pattern_rhombus(int n) {
  for (int i = 1; i <= n; i++) {
    cout << string(n - i, ' ');
    cout << string(2 * i - 1, '*');
    cout << string(n - i, ' ');
    cout << "\n";
  }
  for (int i = n; i > 0; i--) {
    cout << string(n - i, ' ');
    cout << string(2 * i - 1, '*');
    cout << string(n - i, ' ');
    cout << "\n";
  }
}


// Pattern 10
void right_arrow(int n) {
  for (int i = 1; i <= n; i++) {
    cout << string(i, '*') << "\n";
  }
  for (int i = n - 1; i > 0; i--) {
    cout << string(i, '*') << "\n";
  }
}


// Pattern 11



int main() {
  int n;
  cin >> n;
  // print_squre_pattern(n);
  // left_triangle(n);
  // left_triangle_num(n);
  // left_triangle_same_num(n);
  // left_reverse_triangle(n);
  // left_reverse_triangle_num(n);
  // centered_pyramid(n);
  // test(n);
  // centered_pyramid_solution(n);
  // reverse_centered_pyramid(n);
  // pattern_rhombus(n);
  right_arrow(n);
}




