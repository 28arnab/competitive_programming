/* Author: Arnab Sarkar */
/* codeforces: 28arnab */
/* atcoder: arnab28 */
/* codechef: arnabs28 */
/* cses: 28arnab */

#include <algorithm>
#include <vector>
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
  vector<int> v(3);
  cin >> v[0] >> v[1] >> v[2];
  sort(v.begin(),v.end());
  cout << v[0] << " ";
  sort(v.rbegin(),v.rend());
  cout << v[0];
}