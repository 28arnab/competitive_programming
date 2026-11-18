/* Author: Arnab Sarkar */
/* codeforces: 28arnab */
/* atcoder: arnab28 */
/* codechef: arnabs28 */
/* cses: 28arnab */

#include <bits/stdc++.h>
using namespace std;

#define first f
#define second s
#define push_back pb
#define emplace_back eb

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
  int n;
  cin >> n;

  auto f = [&](ull x) -> ull {
    if (x < 10)
      return x;
    ull s = 0;
    while (x > 0) {
      s += x % 10;
      x /= 10;
    }
    return s;
  };

  vector<ull> A(n + 1);
  A[0] = 1;

  for (int i = 1; i <= n; ++i) {
    ull sum = 0;
    for (int j = 0; j < i; ++j) {
      sum += f(A[j]);
    }
    A[i] = sum;
  }

  cout << A[n];
}