/* Author: Arnab Sarkar */
/* codeforces: 28arnab */
/* atcoder: arnab28 */
/* codechef: arnabs28 */
/* cses: 28arnab */
#ifndef ONLINE_JUDGE
#include "cp_header.h"
#else
#include <bits/stdc++.h>
using namespace std;
#endif

using ll = long long;
using ld = long double;
using st = string;

#define F first
#define S second

#define REP(i, a, b) for (ll i = (a); i <= (b); i++)
#define PER(i, a, b) for (ll i = (b); i >= (a); i--)

using vll = vector<ll>;
using vld = vector<ld>;
using vs = vector<st>;

using pll = pair<ll, ll>;
using pld = pair<ld, ld>;
using ps = pair<st, st>;

/*
2025 and 2026 1
2025 and 2025 1
2026 and 2026 0
2025 1
2026 0
*/

void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;

  if (s.find("2025") != string::npos)
  {
    if (s.find("2026") != string::npos)
    {
      cout << 0 << endl;
      return;
    }
    cout << 1 << endl;
    return;
  }
  cout << 0 << endl;
}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}