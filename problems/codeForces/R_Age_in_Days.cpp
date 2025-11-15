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
  int i{}, y{}, m{}, d{};
  cin >> i;
  while (i >= 365) {
    i -= 365;
    y++;
  }
  while (i >= 30) {
    i -= 30;
    m++;
  }
  d = i;
  cout << y << " years\n";
  cout << m << " months\n";
  cout << d << " days\n";
}