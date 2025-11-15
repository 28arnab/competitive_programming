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
  int n{};
  cin >> n;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n - i - 1; ++j) {
      cout << " ";
    }

    int s = 2 * i + 1;
    for (int k = 0; k < s; ++k) {
      cout << "*";
    }

    cout << "\n";
  }
}