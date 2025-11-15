/* Author: Arnab Sarkar */
/* codeforces: 28arnab */
/* atcoder: arnab28 */
/* codechef: arnabs28 */
/* cses: 28arnab */

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
  int num_test = 1;
  // cin >> num_test;
  while (num_test--)
    solve();
  return 0;
}

void solve() {
  int in{}, even{}, odd{}, pos{}, neg{};
  cin >> in;
  for (int i = 0; i < in; ++i) {
    int v{};
    cin >> v;
    if (v % 2 == 0)
      even++;
    else
      odd++;
    if (v == 0)
      continue;
    if (v > 0)
      pos++;
    else
      neg++;
  }
  cout << "Even: " << even << "\n";
  cout << "Odd: " << odd << "\n";
  cout << "Positive: " << pos << "\n";
  cout << "Negative: " << neg << "\n";
}