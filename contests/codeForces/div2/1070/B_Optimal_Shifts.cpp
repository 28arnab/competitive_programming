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

#define REP(i, a, b) for (ll i = a; i <= b; i++)
#define PER(i, a, b) for (ll i = b; i >= a; i--)

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
    string s;
    cin >> s;

    if (count(s.begin(), s.end(), '1') == n)
    {
        cout << 0 << "\n";
        return;
    }

    string s2 = s + s;

    int mg = 0;
    int c = 0;

    for (int i = 0; i < 2 * n; i++)
    {
        if (s2[i] == '0')
            c++;
        else
        {
            mg = max(mg, c);
            c = 0;
        }
    }

    cout << mg << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}