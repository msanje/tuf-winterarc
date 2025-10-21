#include<iostream>
using namespace std;


// example - (252, 198) -> 18 gcd
int euclid(int n_1, int n_2) {
  int max = n_1 > n_2 ? n_1 : n_2;
  cout << "max: " << max << "\n";

  while (n_1 > 0 and n_2 > 0) {
    if (max == n_1) {
      cout << "hello from if" << "\n";
      n_1 = n_1 % n_2;
    } else if (max == n_2) {
      cout << "hello from else if" << "\n";
      n_2 = n_2 % n_1;
    }
  }

  return n_1 > n_2 ? n_1 : n_2; 
}


int gcd(int a, int b) {
  while (b != 0) {
    cout << "a: " << a << "b: " << b << "\n";
    int remainder = a % b;
    a = b;
    b = remainder;
  }
  
  return a;
}
    

vector<int> factors(int n) {
  vector<int> factors;

  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      factors.push_back(i);
    } 
  }

  return factors;
}

int main() {
  int n_1;
  int n_2;
  cin >> n_1 >> n_2;
  
  // int result = euclid(n_1, n_2);
  int result = gcd(n_1, n_2);

  cout << result << "\n";

  // vector<int> f_1 = factors(n_1);
  // vector<int> f_2 = factors(n_2);
  //
  // vector<int> same_f;
  //
  // for (int x_1 : f_1) {
  //   for (int x_2 : f_2) {
  //     // cout << x << " ";
  //     if (x_1 == x_2) {
  //       same_f.push_back(x_1);
  //     } 
  //   }
  // }
  // cout << "\n";
  //
  // int maximum = *max_element(same_f.begin(), same_f.end());
  // cout << "maximum: " << maximum << "\n";
}


