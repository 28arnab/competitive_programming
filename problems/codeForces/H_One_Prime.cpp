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

bool solve();

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int num_test = 1;
  // cin >> num_test;
  while (num_test--)
    if (solve())
      cout << "YES";
    else
      cout << "NO";
  return 0;
}

bool solve() {
  int in{};
  cin >> in;
  if (in == 2)
    return true;
  if (in % 2 == 0)
    return false;
  for (int i = 3; i * i <= in; i += 2)
    if (in % i == 0)
      return false;
  return true;
}