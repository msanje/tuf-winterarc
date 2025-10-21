#include<iostream>
#include<list>
#include<stack>
#include<set>
#include<map>
#include "algorithms.h"
using namespace std;


// not sorted and cannot store duplicate keys
// unique keys and unsorted compared to set
// works in almost all cases in constant time O(1)
void explainUnorderedMap() {
  // same as set and unordered_Set difference.
}

// everything in sorted order
// can store duplicate keys
void explainMultimap() {
  // everything same as map, only it can store 
  // multiple keys
  // only mpp[key] cannot be used here
}

// map stores unique keys in sorted order
void explainMap() {
  map<int, int> mpp_one;

  // map<int, pair<int, int>> mpp_two;

  map<pair<int, int>, int> mpp_three;

  // three different ways of storing for mpp_one 
  mpp_one[1] = 2;
  // this doesn't work because
  // template argument deduction fails with {} braces
  // mpp_one.emplace({3, 1});
  mpp_one.emplace(make_pair(2, 4));
  mpp_one.emplace(make_pair(5, 4));
  mpp_one.insert({3, 5});


  // appending to mpp_two
  mpp_three[{2, 3}] = 10;

  for (auto &p : mpp_one) {
    cout << p.first << " : " << p.second << "\n";
  }
  cout << "\n";

  cout << mpp_one[1]; // 2
  cout << "\n";

  cout << mpp_one[3]; // 5
  cout << "\n";

  cout << mpp_one[4]; // 0 -> because there's no such key
  cout << "\n";


  auto it = mpp_one.find(3);
  // cout << *(it).second;  // this doesn't work
  cout << it->first; 
  cout << "\n";
  cout << it->second; 
  cout << "\n";


  // when this doesn't exist this points to 
  // right after the last value in the map
  auto it_one = mpp_one.find(6);
  if (it_one != mpp_one.end()) {
    cout << it_one->first << " : " << it_one->second;
  } else {
    cout << "Key not found\n";
  }
  cout << "\n";

  // auto it_one = mpp_one.find(3);
  auto it_lb = mpp_one.lower_bound(2);
  if (it_lb != mpp_one.end()) {
    cout << "lower_bound: " << it_lb->first << " : " << it_lb->second << "\n";
  }

  auto it_ub = mpp_one.upper_bound(2);
  if (it_ub != mpp_one.end()) {
    cout << "upper_bound: " << it_ub->first << " : " << it_ub->second << "\n";
  }

  // erase, swap, size, empty are same as above.

  // if (it != mpp_one.end()) {
  //   cout << "it->second: " << it->second << "\n";
  // }

  // for (auto &p : mpp_two) {
  //   cout << p.first << " : " << p.second << "\n";
  // }
  // cout << "\n";

  // & is used to only get the reference to the actual element
  for (auto &p : mpp_three) {
    cout << "(" << p.first.first << " , " << p.first.second << ")" << " : " << p.second << "\n";
  }
  cout << "\n";

}

// stores unique values but not sorted
// stores values in randomized order
// in most of the cases the time complexity is O(1)
void explainUSet() {
  // unordered set<int> st;
  // lower_bound and upper_bound function
  // does not work, rest all functions are the same
  // as above, it does not store in any
  // particular order it has a beter complexity
  // than set in most cases, except some cases when
  // collision happens
}

void explainMultiSet() {
  // everything is same as set
  // only diff is that it stores duplicate elements also
  multiset<int>ms;
  ms.insert(1); // {1}
  ms.insert(1); // {1, 1}   
  ms.insert(1); // {1, 1, 1}

  // ms.erase(1); // erases all instance of 1's
  
  int cnt = ms.count(1);
  cout << cnt << "\n";

  // only a single 1 erase
  // find(1) points to the iterator 
  // ms.erase(ms.find(1)); 

  auto it1 = ms.find(1);
  auto it2 = next(it1, 2);
  // ms.erase(ms.find(1), ms.find(1)+2); // this doesn't work
  ms.erase(it1, it2);

  // rest all functions same as set

  for (int x : ms) {
    cout << "x: " << x << "\n"; // prints the remaining 1
  } 
  cout << "\n";
}


// stores everything in the sorted order
// and only stores unique values
// in set everything happens in logarithmic complexity log(n)
void explainSet() {
  set<int>st;
  st.insert(1); // {1}
  st.emplace(2); // {1, 2}
  st.insert(2); // {1, 2}
  st.insert(4); // {1, 2, 4}
  st.insert(3); // {1, 2, 3, 4}
  st.insert(5); // {1, 2, 3, 4, 5}

  // Funationality of insert in vector
  // can be used also, that only increase efficienty 
  
  // begin(), end(), rbegin(), rend(), size()
  // empty() and swap() are same as those of above

  // returns an iterator which will point to the given value inside find()
  // auto it = st.find(4);

  // because 6 is not there in the set
  // this will return st.end() -> an iterator right after the end/last value 
  // auto it = st.find(6);

  // erases the given value from the set, 
  // by giving the element itself
  // st.erase(5);

  for (int x : st) {
    cout << x << " ";
  }
  cout << "\n";

  // cout << *(it);
  // cout << "\n";
  
  // if whats passed inside cout exists 
  // we get 1, if not we get 0
  int cnt = st.count(9);
  cout << cnt;
  cout << "\n";

  // erasing element by giving iterator
  // auto it = st.find(3);
  // st.erase(it);
  //
  // cout << "\n";
  //
  // for (int x : st) {
  //   cout << x << " ";
  // }
  // cout << "\n";

  // {1, 2, 3, 4, 5}
  // auto it1 = st.find(2);
  // auto it2 = st.find(4);
  // st.erase(it1, it2); // {1, 4, 5}

  // size(), empty(), swap(), begin() and everything 
  // is the same as in vector.
  // lower_bound() and upper_bound() function
  // works in the same way as in vector it does.

  // the syntax
  // returns an iterator to the first element >= x
  auto it1 = st.lower_bound(2);
  cout << *it1;
  cout << "\n";
 
  // returns an iterator to the first element > x
  auto it2 = st.upper_bound(3);
  cout << *it2;
  cout << "\n";

  // for (int x : st) {
  //   cout << x << " ";
  // }
  // cout << "\n";
}

// push and pop happens in log_n
// top -> O(1)
void explainPQ() {
  // Max heap
  priority_queue<int>pq;

  pq.push(5);
  pq.push(2);
  pq.push(8);
  pq.emplace(10);

  cout << pq.top(); // {10}
  cout << "\n";

  pq.pop();

  cout << pq.top(); // {8}
  cout << "\n";

  // this doesn't work
  // pq.clear();
  cout << pq.empty(); // 0 -> false
  cout << "\n";

  // size swap empty function same as others
  
  // Minimum Heap - this stores the minimum element at the top
  priority_queue<int, vector<int>, greater<int>> pq_two;
  pq_two.push(5);
  pq_two.push(2);
  pq_two.push(8);
  pq_two.push(10);

  cout << pq_two.top(); // prints 2
  cout << "\n";
}

// Queue is FIFO
// all the operations are happening in constant time O(1)
void explainQueue() {
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.emplace(4);

  q.back() += 5;

  cout << q.back(); // {9} -> cause 5 + 4 = 9
  cout << "\n";

  cout << q.front(); // {1}
  cout << "\n";

  q.pop();

  cout << q.front(); // {2}
  cout << "\n";

  // size, swap, empty same as stack
}


// Stack is - LIFO
// everything in stack happens in constant time O(1)
void explainStack() {
  stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.emplace(5);

  // stack cannot be iterated using range based for loop
  // for (auto x : st) {
  //   cout << x << " ";
  // }
  // cout << "\n";
  //stacks looks like this
  // {1, 2, 3, 4, 5}
  
  cout << st.top();  // {5} - as this is the last pushed - and last pushed will always be on top in a stack
  cout << "\n";

  st.pop(); // after pop {1, 2, 3, 4}

  cout << st.top(); // {4}
  cout << "\n";

  cout << st.size(); // 4
  cout << "\n";

  cout << st.empty();
  cout << "\n";

  // stack<int>st1, st2;
  stack<int>st1; 
  st1.push(1);
  st1.push(2);

  stack<int>st2;
  st2.push(3);
  st2.push(4);


  // cout << "before swap";
  // cout << "\n";
  // while (!st1.empty()) {
  //   cout << st1.top() << " ";
  //   st1.pop();
  // }
  // cout << "\n";
  //
  // while (!st2.empty()) {
  //   cout << st2.top() << " ";
  //   st2.pop();
  // }
  // cout << "\n";


  st1.swap(st2);

  cout << "after swap";
  cout << "\n";
  while (!st1.empty()) {
    cout << st1.top() << " ";
    st1.pop();
  }
  cout << "\n";

  while (!st2.empty()) {
    cout << st2.top() << " ";
    st2.pop();
  }
  cout << "\n";

  // printing (will destry the stack)
  // while (!st.empty()) {
  //   cout << st.top() << " ";
  //   st.pop();
  // }
  // cout << "\n";

  // if we want to keep the original stack, we need to copy
  // auto temp = st;
  // while (!temp.empty()) {
  //   cout << temp.top() << " ";
  //   temp.pop();
  // }
  // cout << "\n";

  cout << st.empty();
  cout << "\n"; // 0 -> false
}


// similar to list and vector
void explainDeque() {
  deque<int>dq;
  
  dq.push_back(1);
  dq.emplace_back(2);
  dq.push_front(3);
  dq.emplace_front(4);

  dq.pop_back();
  dq.pop_front();

  cout << dq.back() << " ";
  cout << dq.front() << " ";

  cout << "\n";

  for (auto x : dq) {
    cout << x << " ";
  }
  cout << "\n";

  // rest of the fucntions same as vector
  // begin, end, rbegin, rend, clear, insert, size, swap
}


void explainList() {
  // list is a container dynamic nature similar to vector
  // doubly linked list is what's mained for a list  
  // a vector has a single linked list 
  list<int> ls;

  ls.push_back(2); // {2}
  ls.emplace_back(4); // {2, 4}

  // push_front is very very cheap in time complexity when you compare it to a vector 
  ls.push_front(5); // {5, 2, 4}
  
  ls.emplace_front(6); // {6, 5, 2, 4}

  
  for (auto x : ls) {
    cout << x << " ";
  }
  cout << "\n";

  // rest of the fucntions same as vector
  // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainVector() {
  // vector is a container. And it's dynamic in nature but arrays is not.
  // meaning you can always increase the size of the vector 
  vector<int> v;

  v.push_back(1);
  // emplace_back is faster then push_back
  v.emplace_back(2);
  for (int x:v) {
    cout << x;
  }
  cout << "\n";


  // defining a vector of a pair datatype
  vector<pair<int, int>>vec;
  vec.push_back({1, 2});
  vec.emplace_back(1, 2);
  

  // vector with prefilled values of given length - here it's 5
  vector<int> v_two(5, 100); // {100, 100, 100, 100, 100}
  for (int x:v_two) {
    cout << x << " ";
  }
  cout << "\n";

  
  vector<int> v_three(5);
  for (int x:v_three) {
    cout << x << " ";
  }
  cout << "\n";

  // copying one verctor to another
  vector<int> v1(5, 20);
  for (int x:v1) {
    cout << x << " ";
  }
  cout << "\n";

  vector<int> v2(v1);
  for (int x:v2) {
    cout << x << " ";
  }
  cout << "\n";

  // pushing to the vector works
  v2.push_back(1);
  for (int x:v2) {
    cout << x << " ";
  }
  cout << "\n";


  // accessing elements in a vector
  // using array like method
  vector<int> vec_t = {10, 20, 30, 40, 50};
  cout << vec_t[0] << "\n";

  // using iterator method
  // what is an iterator 
  // here it is the pointer (memory address)
  vector<int>::iterator it = vec_t.begin();
  it++;
  cout << *(it) << " ";

  it = (it + 2);
  cout << *(it) << " ";
  cout << "\n";


  cout << "iterator start" << "\n";

  // end points to the pointer right after the last element
  vector<int>::iterator en = vec_t.end();
  --en; 
  cout << *(en) << " ";
  cout << "\n";

  // rend points to the pointer right after the first element(because this reverses the vector)
  vector<int>::reverse_iterator ren = vec_t.rend();
  --ren; 
  cout << *(ren) << " ";
  cout << "\n";

  // this will point to the last element in the vector
  vector<int>::reverse_iterator rbe = vec_t.rbegin();
  cout << *(rbe) << " ";
  cout << "\n";

  cout << "iterator end" << "\n";

  cout << "v.back: " << vec_t.back() << "\n";

  // this is how you can print the entire vector
  for (vector<int>::iterator it = vec_t.begin(); it != vec_t.end(); it++) {
    cout << *(it) << " ";
  }
  cout << "\n";

  // STL gives us something called auto that we can use like this
  // auto - it automatically assigns to a vector iterator 
  for (auto it = vec_t.begin(); it != vec_t.end(); it++) {
    cout << *(it) << " ";
  }; 
  cout << "\n";

  // for each loop method
  for (auto it : vec_t) {
    cout << it << " ";
  }
  cout << "\n";


  // one way to erase
  // {10, 20, 30, 40, 50} -> {10, 30, 40, 50}
  // vec_t.erase(vec_t.begin()+1);
  //
  //
  // for (auto it : vec_t) {
  //   cout << it << " ";
  // }
  // cout << "\n";

  // another way to erase
  // vec_t.erase(vec_t.begin() + 2, vec_t.begin() + 4);


  // for (auto it : vec_t) {
  //   cout << it << " ";
  // }
  // cout << "\n";


  // Insert
  vector<int>vec_i(2, 100); // {100, 100}
  vec_i.insert(vec_i.begin(), 300);  // {300, 100, 100}
  vec_i.insert(vec_i.begin() + 1, 2, 10); // {300, 10, 10, 100, 100} 

  // copying one vector to another
  vector<int>copy(2, 50); // {50, 50}
  // copy.begin(), copy.end() means the entire copy vector 
  vec_i.insert(vec_i.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

  cout << vec_i.size();

  cout << "\n";

  for (auto it : vec_i) {
    cout << it << " ";
  }
  cout << "\n";
  cout << "before pop_back";
  cout << "\n";


  vec_i.pop_back();
  
  for (auto it : vec_i) {
    cout << it << " ";
  }
  cout << "\n";
  cout << "after pop_back";
  cout << "\n";

  vector<int>v3 = {1, 2};
  vector<int>v4 = {3, 4};

  // v3 -> v4 and v4 to v3
  v3.swap(v4);

  for (auto it : v3) {
    cout << it << " ";
  }
  cout << "\n";


  for (auto it : v4) {
    cout << it << " ";
  }
  cout << "\n";

  v4.clear();
  for (auto it : v4) {
    cout << it << " ";
  }
  cout << "v4 after clear";
  cout << "\n";

  // this returns 1 to show true
  // empty() erases the vector
  cout << v4.empty();
  cout << "\n";


  // this returns 0 to show false
  vector<int>v5(2, 5);
  cout << v5.empty();
  cout << "\n";
}


void explainPair() {
  pair<int, int> p = {1, 3};

  cout << p.first << p.second << "\n";

  cout << "\n";

  pair<int, pair<int, int>> pp = {1, {3, 4}};

  cout << pp.first << pp.second.first << pp.second.second;

  cout << "\n";

  pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};

  cout << arr[1].second;

  cout << "\n";
}

int main() {
  // explainPair();
  // explainVector();
  // explainList();
  // explainDeque();
  // explainStack();
  // explainQueue();
  // explainPQ();
  // explainSet();
  // explainMultiSet();
  // explainUSet();
  // explainMap();
  explainExtra();
}


