/* Author: Arnab Sarkar */
/* codeforces: 28arnab */
/* atcoder: arnab28 */
/* codechef: arnabs28 */
/* cses: 28arnab */

#include <algorithm>
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
  int num_test;
  cin >> num_test;
  while (num_test--)
    solve();
  return 0;
}

void solve() {
  ull x{}, y{}, sum{};
  cin >> x >> y;
  if (max(x, y) - min(x, y) == 1) {
    cout << 0 << "\n";
    return;
  }
  for (int i = min(x, y) + 1; i < max(x, y); i++) {
    if (i % 2 == 0)
      continue;
    sum += i;
  }
  cout << sum << "\n";
}