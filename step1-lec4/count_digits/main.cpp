#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

void count_digits(int n) {
  n = abs(n);
  
  if (n == 0) {
    cout << 1 << "\n";
    return;
  }

  int count = 0;
  while (n > 0) {
    n = n / 10;
    count++;
  }

  cout << count << "\n";
}


int main() {
  int n; 
  cin >> n;
  count_digits(n);
}
