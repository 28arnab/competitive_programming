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
    int L{}, U{}, R{}, C{};
    cin >> L;
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'U')
            U++;
        else
            R++;

        if (U == R && i + 1 < str.size() && str[i] == str[i + 1])
            C++;
    }
    cout << C << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}