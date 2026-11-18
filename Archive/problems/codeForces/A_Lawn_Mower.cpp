/* Author: Arnab Sarkar */
#include <ostream>
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
	int number_of_boards , width_of_mower;
	cin >> number_of_boards >> width_of_mower;
	cout << number_of_boards - ( number_of_boards / width_of_mower) << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    for(auto i = 1; i <= t; i++)
    {
        // cout << "Test Case " << i << ":" << endl;
        solve();
    }
    return 0;
}
