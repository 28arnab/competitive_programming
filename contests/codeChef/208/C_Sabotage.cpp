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
  int num_test{};
  cin >> num_test;
  while (num_test--)
    solve();
  return 0;
}

void solve() {
  int n, x, k;
  cin >> n >> x >> k;

  vector<int> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }

  sort(v.rbegin(), v.rend());

  int s = 0;
  for (int i = 0; i < n && s < k; ++i) {
    if (v[i] > x) {
      v[i] = 0;
      x += 100;
      s++;
    } else {
      break;
    }
  }

  int r = 0;
  for (int score : v) {
    if (score > x)
      r++;
  }

  cout << (r + 1) << "\n";
}
