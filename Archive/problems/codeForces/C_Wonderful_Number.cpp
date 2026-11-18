/* Author: Arnab Sarkar */
/* codeforces: 28arnab */
/* atcoder: arnab28 */
/* codechef: arnabs28 */
/* cses: 28arnab */

#include <algorithm>
#include <bitset>
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
  long long int n{};
  cin >> n;

  bool odd = (n % 2 != 0);

  bitset<32> a(n);
  string s = a.to_string();

  s.erase(0, s.find_first_not_of('0'));
  if (s.empty())
    s = "0";

  string rs = s;
  reverse(rs.begin(), rs.end());

  if (s == rs && odd)
    cout << "YES";
  else
    cout << "NO";
}