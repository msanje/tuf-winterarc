#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

// Problem Statement
// Given a string, check if the string is palindrome or not.
// A string is said to be palindrome if the reverse of the string is the same
// as the string.

// recursive method
bool palindrome(int i, string& s) {
  if (i >= s.length()/2) return true;

  if (s[i] != s[s.length() - i - 1]) return false;

  return palindrome(i+1, s);
}

int main() {
  ifstream fin("input.txt");
  // ifstream fin("input_two.txt");
  if (!fin) {
    cerr << "Error opening file\n";
    return 1; 
  }

  string s;
  // fin >> s;
  // to get the entire line of input
  getline(fin, s);

  bool result = palindrome(0, s);

  cout << "result: " << result << endl;

  int n = s.size();
  string original = s;

  reverse(s.begin(), s.end());

  if (original == s) {
    cout << "Palindrome" << endl;
  } else {
    cout << "Not Palindrome" << endl;
  }
}


// Examples:
//
// Input: Str = "ABCDCBA"
// Output: Palindrome
//
// Input: Str = "TAKE U FORWARD"
// Output: Not Palindrome
