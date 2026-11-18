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

void solve()
{
    int n, ns{};
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        if (s == "Tetrahedron")
            ns += 4;
        else if (s == "Cube")
            ns += 6;
        else if (s == "Octahedron")
            ns += 8;
        else if (s == "Dodecahedron")
            ns += 12;
        else
            ns+= 20;
    }
    cout << ns;
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