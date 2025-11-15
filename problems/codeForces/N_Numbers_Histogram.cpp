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
  char sym{};
  int num_bars{};
  cin >> sym;
  cin >> num_bars;
  vector<int> v(num_bars);
  for (int i = 0; i < num_bars; i++)
    cin >> v[i];
  for (int i = 0; i < num_bars; i++) {
    while (v[i]--) {
      cout << sym;
    }
    cout << "\n";
  }
}