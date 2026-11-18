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
    int n;
    cin >> n;
    vector<int> f(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        f[x]++;
    }
    int a = 1, mf = 0;
    for (int c = 1; c <= n; c++)
    {
        if (f[c] > mf)
        {
            mf = f[c];
            a = c;
        }
    }
    cout << a << "\n";
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