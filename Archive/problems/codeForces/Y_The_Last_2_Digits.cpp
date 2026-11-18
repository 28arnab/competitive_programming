/* Author: Arnab Sarkar */
/* codeforces: 28arnab */
/* atcoder: arnab28 */
/* codechef: arnabs28 */
/* cses: 28arnab */

#include <iomanip>
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
  ull a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << setw(2) << setfill('0')
       << (((a % 100) * (b % 100)) * ((c % 100) * (d % 100))) % 100;
}