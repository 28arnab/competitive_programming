/* Author: Arnab Sarkar */
/* codeforces: 28arnab */
/* atcoder: arnab28 */
/* codechef: arnabs28 */
/* cses: 28arnab */

#include <bits/stdc++.h>
using namespace std;

#define first f
#define second s
#define push_back pb
#define emplace_back eb


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
  while(num_test--) solve();
  return 0;
}

void solve() {
    st i;
    cin >> i;
    for (int j = ((int)i.length()/2); j < (int)i.length(); ++j)
    {
        i[j] = i[j + 1];
    }
    i.pop_back();
    cout << i;
}