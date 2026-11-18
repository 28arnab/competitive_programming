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
calculating number of vertices
types of vertices we have is 3
1. corner vertices -> 4
2. edge vertices -> 4 * (2 ^ i - 1) // i is number of sq along a axis
     4 is no. sides of the sq
     2 ^ i + 1 is no. of verties at a side
     but there are 2 corner verties so we do (2 ^ i + 1) - 2 => 2 ^ i - 1
3. interior vertices -> (2 ^ i - 1) ^ 2
     2 ^ i + 1 is no. of verties at a side
     (2 ^ i + 1) - 2 => 2 ^ i - 1 since 2 edge verties we taken
     its (2 ^ i - 1) ^ 2
*/

void solve()
{
    ll i;
    cin >> i;
    i = 1LL << i;
    cout << (i + 1) * (i + 1);
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}