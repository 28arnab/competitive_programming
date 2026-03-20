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
	int n, cn;
	bool one = false, six_seven = false;
	cin >> n;
	while (n--) 
	{
		cin >> cn;
		if(cn == 1)
			one = true;
		else if(cn == 67)
			six_seven = true;
	}
	if(n > 1)
	{
		if(one && six_seven)
			cout << "YES";
		else 
			cout << "NO";
	}
	else
	{
		if(six_seven)
			cout << "YES";
		else 
			cout << "NO";
	}
	cout << endl;
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