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
  int n = 7;
  vector<int> v(n);
  for(int& i : v)
    cin >> i;
  sort(v.begin(), v.end());
  int sum{};
  for (int i{}; i < v.size() - 1; ++i)
    sum += v[i];
  sum = sum - v[6];
  cout << sum * -1;
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