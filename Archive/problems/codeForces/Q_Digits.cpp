/* Author: Arnab Sarkar */
/* codeforces: 28arnab */
/* atcoder: arnab28 */
/* codechef: arnabs28 */
/* cses: 28arnab */

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

using ull = unsigned long long int;
using ll = long long int;
using ld = long double;
using st = string;

void solve();

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int num_test;
  cin >> num_test;
  while (num_test--)
    solve();
  return 0;
}

void solve() {
  string in;
  cin >> in;
  vector<char> v;
  for (int i = 0; i < in.size(); ++i) {
    v.emplace_back(in[i]);
  }
  reverse(v.begin(),v.end());
  for (int i = 0; i < v.size(); ++i) {
    cout << v[i] << " ";
  }
  cout << "\n";
}