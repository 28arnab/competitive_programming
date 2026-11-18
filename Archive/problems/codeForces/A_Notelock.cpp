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
  int num_test;
  cin >> num_test;
  while (num_test--)
    solve();
  return 0;
}

void solve() {
  st s;
  int ans{}, n{}, k{};
  cin >> n >> k >> s;
  for (int i = 0; i < n; i++) {
    if (s[i] == '0')
        continue;
    for (int j = 1; j < k; ++j)
  {
      if (i >= j && s[i-j] == '1') goto d;
  }
    ans++;
    d:
    ;
  }
  
  cout << ans << "\n";
}