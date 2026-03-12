/* Author: Arnab Sarkar */
/* codeforces: 28arnab */
/* atcoder: arnab28 */
/* codechef: arnabs28 */
/* cses: 28arnab */
// #ifndef ONLINE_JUDGE
// #include "cp_header.h"
// #else
#include <bits/stdc++.h>
using namespace std;
// #endif

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

void solve(int t)
{
    int minv = 1000000, maxv = -1000000;
    int j;
    while (t--)
    {
        cin >> j;
        if (minv >= j)
            minv = j;
        if (maxv < j)
            maxv = j;
    }
    printf("%d %d %d\n", minv, maxv, maxv - minv);
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1, caseN = 1;
    while (cin >> t)
    {
        printf("Case %d: ", caseN);
        solve(t);
        caseN++;
    }
    return 0;
}