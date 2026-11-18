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
#define s second

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
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int q;
    cin >> q;
    unordered_set<char> sets(s.begin(), s.end());
    unordered_set<char> sett(t.begin(), t.end());

    while (q--)
    {
        string w;
        cin >> w;
        bool oks = true, okt = true;
        for (char c : w)
        {
            if (!sets.count(c))
                oks = false;
            if (!sett.count(c))
                okt = false;
        }
        if (oks && !okt)
            cout << "Takahashi\n";
        else if (!oks && okt)
            cout << "Aoki\n";
        else
            cout << "Unknown\n";
    }
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