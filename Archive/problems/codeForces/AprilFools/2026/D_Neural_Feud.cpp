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
  switch (n)
  {
  case 1:
    cout << "walk";
    break;
  case 2:
    cout << "no";
    break;
  case 3:
    cout << "no";
    break;
  case 4:
    cout << "no";
    break;
  case 5:
    cout << "yes";
    break;
  case 6:
    cout << "yes";
    break;
  case 7:
    cout << "backwards";
    break;
  case 8:
    cout << n;
    break;
  }
}

int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  //   cin >> t;
  while (t--)
  {
    solve();
    cout << endl;
  }
  return 0;
}