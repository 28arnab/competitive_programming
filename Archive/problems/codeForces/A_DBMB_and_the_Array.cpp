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
    int n, s, x, nsum{}, nt;
    cin >> n >> s >> x;
    while (n--)
    {
        cin >> nt;
        nsum += nt;
    }
    if (nsum > s)
        cout << "NO";
    else if (nsum == s)
        cout << "YES";
    else if (x == 1)
        cout << "YES";
    else
        while (1)
        {
            nsum += x;
            if (nsum == s)
            {
                cout << "YES";
                break;
            }
            if (nsum > s)
            {
                cout << "NO";
                break;
            }
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
        cout << endl;
    }
    return 0;
}