/* Author: Arnab Sarkar */
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

bool nd(vll v)
{
    for (int i = 1; i < v.size(); ++i)
        if (v[i] < v[i - 1])
            return false;
    return true;
}
void solve()
{
    int n;
    cin >> n;
    vll v(n);
    for (auto &i : v)
        cin >> i;
    if (nd(v))
        cout << n;
    else
        cout << 1;
    cout << endl;
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