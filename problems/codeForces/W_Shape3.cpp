/* Author: Arnab Sarkar */
/* codeforces: 28arnab */
/* atcoder: arnab28 */
/* codechef: arnabs28 */
/* cses: 28arnab */

#include <iostream>
using namespace std;

using ull = unsigned long long int;
using ll = long long int;
using ld = long double;
using st = string;

void solve();

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int num_test = 1;
  // cin >> num_test;
  while (num_test--)
    solve();
  return 0;
}

void solve() {
  int c;
  cin >> c;

  for (int i = 1; i <= c; ++i) {
    for (int j = 0; j < c - i; ++j) {
      cout << " ";
    }
    for (int j = 0; j < 2 * i - 1; ++j) {
      cout << "*";
    }
    cout << "\n";
  }

  for (int i = c; i >= 1; --i) {
    for (int j = 0; j < c - i; ++j) {
      cout << " ";
    }
    for (int j = 0; j < 2 * i - 1; ++j) {
      cout << "*";
    }
    cout << "\n";
  }
}