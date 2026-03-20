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
    ll n, ps{};
    cin >> n;
    vll v(n);
    for (ll &i : v)
        cin >> i;
    while (ps < n && v[ps] == (n - ps))
        ps++;
    if (ps == n)
    {
        REP(i, 0, n - 1)
        {
            cout << v[i] << ' ';
        }
        cout << endl;
    }
    else
    {
        ll f = -1;
        REP(i, 0, n - 1)
        {
            if (v[i] == n - ps)
                f = i;
        }
        REP(i, ps, (ps + f) - i - 1)
        {
            swap(v[i], v[ps + f - i]);
        }
        REP(i, 0, n - 1)
        {
            cout << v[i] << ' ';
        }
        cout << endl;
    }
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