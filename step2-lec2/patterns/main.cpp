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


// Pattern 7 - with all for loops 
void centered_pyramid_with_nested_loops(int n) {
  for (int i = 0; i < n; i++) {
    // space
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }
    // star
    for (int j = 0; j < 2 * i + 1; j++) {
      cout << "*";
    }
    // space
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }
    cout << "\n";
  }
}


// Pattern 8
void reverse_centered_pyramid(int n) {
  for (int i = n; i > 0; i--) {
    cout << string(n - i, ' ');
    cout << string(2 * i - 1, '*');
    cout << string(n - i, ' ');
    cout << "\n";
  }
  cout << "\n";
}

void reverse_centered_pyramid_with_for_loops(int n) {
  for (int i = n; i > 0; i--) {
    // space
    for (int j = 0; j <= n - i; j++) {
      // cout << "j: " << j;
      cout << " ";
    }

    // star - we want to print 2 * i + 1 star on each row
    for (int j = 0; j < 2 * i - 1; j++) {
      cout << "*";
    }

    // space
    for (int j = 0; j < n - i; j++) {
      cout << " ";
    }

    cout << "\n";
  }
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
void binary_left_triangle(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << 1 - (i + j) % 2 << " ";  
    }
    cout << "\n";
  }
}

/*
Assignment:
2
3 2
2 3 2
3 2 3 2
2 3 2 3 2
*/

void binary_left_triangle_assignment(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j<= i; j++) {
      // cout << i << " ";
      cout << 2 + (i + j) % 2 << " ";
    }
    cout << "\n";
  }
}


/*
1      1
12    21
123  321
12344321
*/
// Pattern 12
void square_num(int n) {
  for (int i = 1; i <= n; i++) {
    // start num
    for (int j = 1; j <= i; j++) {
      cout << j;
    }

    // middle space 
    for (int j = 1; j <= (2*n - 2*i); j++) {
      cout << " ";
    }

    // end num
    for (int j = i; j > 0; j--) {
      cout << j;
    }

    cout << "\n";
  }
}

/*
1
12
1 3
1  4
12345
*/
// TODO
void hollow(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << j; 
    }
    cout << "\n";
  }
}


// Pattern 13
/*
1
2  3
4  5  6
7  8  9  10
11 12 13 14 15
*/
void right_angled_triangular_number_pattern(int n) {
  int variable = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << variable << " ";
      variable++;
    }
    cout << "\n";
  }
}

// Pattern 14
/*
A
AB
ABC
ABCD
ABCDE
*/
void right_angled_alphabets(int n) {
  string alphabets[5] = {"A", "B", "C", "D", "E"};
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < i; j++) {
      // cout << alphabets[j];
      cout << char('A' + j); 
    }
    cout << "\n";
  }
}

// Pattern 15
/*
ABCDE
ABCD 
ABC 
AB 
A
*/
void reverse_right_angled_alphabets(int n) {
  for (int i = n; i > 0; i--) {
    // for (int j = i - 1; j >= 0; j--) {
    //   cout << char('A' + j);
    // }
    for (int j = 0; j <= i - 1; j++) {
      cout << char('A' + j);
    }
    cout << "\n";
  }
}

// Pattern 16
void right_alphabets(int n) {
  for (int i = 0; i < n; i++) {
    // cout << "i: " << i << "\n";
    for (int j = 0; j <= i; j++) {
      cout << char('A' + i); 
    } 
    cout << "\n";
  }
}

// Pattern 17 - INCOMPLETE
void alphabets_triangle(int n) {
  for (int i = 1; i <= n; i++) {
    // left space
    for (int i = n - 1; i >= 0; i--) {
      cout << "* ";
    } 

    // 1, 3, 4, 7... is what we want from for loop j
    for (int j = 1; j < 2 * n + 1; j++) {
      // cout << "j: " << j << " ";
    }

    // right space
    for (int i = n - 1; i >= 0; i--) {
      cout << "* ";
    }

    cout << "\n";

  }
}

// Pattern 18
/*
E
D E
C D E
B C D E
A B C D E
*/
void reverse_right_alphabets(int n) {
  for (int i = n - 1; i >= 0; i--) {
    for (int j = i; j < n; j++) {
      cout << char('A' + j) << " ";
    }
    cout << "\n";
  }
}


// Pattern 19 - INCOMPLETE
void diamond_in_the_middle(int n) { 
  for (int i = 1; i <= n; i++) {
    cout << string(n - i, '*');
    cout << string(2 * i - 1, ' ');
    cout << string(n - i, '*');
    cout << "\n";
  }
  for (int i = n; i > 0; i--) {
    cout << string(n - i, '*');
    cout << string(2 * i - 1, ' ');
    cout << string(n - i, '*');
    cout << "\n";
  }
}


// Pattern 20 - INCOMPLETE
void patter_twenty(int n) {

}


// Pattern 21 - INCOMPLETE
/*
* * * * 
*     *
*     *
* * * * 
*/
void square_of_stars(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "*" << " ";
    }
    cout << "\n";
  }
}


// Pattern 22 - INCOMPLETE
void square_of_nums(int n) {

}


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
  // right_arrow(n);
  // binary_left_triangle(n);
  // square_num(n);
  // centered_pyramid_with_nested_loops(n);
  // reverse_centered_pyramid_with_for_loops(n);
  // binary_left_triangle_assignment(n);
  // hollow(n);
  // right_angled_triangular_number_pattern(n);
  // right_angled_alphabets(n);
  // reverse_right_angled_alphabets(n);
  // right_alphabets(n);
  // alphabets_triangle(n);
  // reverse_right_alphabets(n);
  // diamond_in_the_middle(n);
  // square_of_stars(n);
  square_of_nums(n);
}





kkkkk
