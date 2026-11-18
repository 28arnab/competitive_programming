/* Author: Arnab Sarkar */
/* codeforces: 28arnab */
/* atcoder: arnab28 */
/* codechef: arnabs28 */
/* cses: 28arnab */

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define first f
#define second s
#define push_back pb
#define emplace_back eb

using ull = unsigned long long int;
using ll = long long int;
using ld = long double;
using st = string;

bool solve();

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int num_test = 1;
  // cin >> num_test;
  while (num_test--) {
    if (solve()) {
      cout << "true";
    } else {
      cout << "false";
    }
  }
  return 0;
}

bool solve() {
  string s;
  cin >> s;
  int n = s.length();

  vector<int> prefix(n);
  prefix[0] = s[0] - 'a' + 1;
  for (int i = 1; i < n; i++)
    prefix[i] = prefix[i - 1] + (s[i] - 'a' + 1);

  int total = prefix[n - 1];

  for (int i = 0; i < n - 1; i++) {
    int sum_left = prefix[i];
    int sum_right = total - sum_left;
    if (sum_left == sum_right)
      return true;
  }

  return false;
}
