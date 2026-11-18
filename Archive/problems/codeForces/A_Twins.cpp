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

void solve()
{
    int n, s, nc{}, sc{};
    cin >> n;
    vll v(n);
    for (auto &in : v)
        cin >> in;
    sort(v.rbegin(), v.rend());
    s = accumulate(v.begin(), v.end(), 0);
    s /= 2;
    for (size_t i = 0; i < v.size(); i++)
    {
        if (sc <= s)
        {
            sc += v[i];
            nc++;
        }
        else
            break;
    }
    cout << nc;
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