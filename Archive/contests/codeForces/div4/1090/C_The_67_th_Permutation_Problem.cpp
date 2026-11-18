/* Author: Arnab Sarkar */
#ifndef ONLINE_JUDGE
#include "cp_header.hpp"
#else
#include <bits/stdc++.h>
using namespace std;
#endif

using ll = long long;
using ld = long double;
using st = string;

#define F first
#define S second
#define B begin
#define E end

#define REP(i, a, b) for (ll i = (a); i <= (b); i++)
#define PER(i, a, b) for (ll i = (b); i >= (a); i--)

using vll = vector<ll>;
using vld = vector<ld>;
using vs = vector<st>;

using pll = pair<ll, ll>;
using pld = pair<ld, ld>;
using ps = pair<st, st>;

void solve()
{
  int n;
  cin >> n;

  int l = 1, r = 3 * n;

  vector<int> v;

  while (l <= r)
  {
    v.push_back(l);
    v.push_back(r - 1);
    v.push_back(r);

    l++;
    r -= 2;
  }

  for (int x : v)
    cout << x << " ";
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
    cout << endl;
  }
  return 0;
}