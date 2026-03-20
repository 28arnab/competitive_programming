/* Author: Arnab Sarkar */
#include <algorithm>
#include <vector>
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

// taking red as true blue as false also even is red odd is blue
void solve()
{
	int n, nt;
	cin >> n;
	vector<pair<int,bool>> v(n);
	for(int i = 0; i < n; i++)
	{
		cin >> v[i].F;
		if((i + 1) % 2 == 0)
			v[i].S = true;
	}
	sort(v.B(),v.E());
	for (size_t i = 0; i < v.size() - 1; ++i) 
	{
    	if (v[i].second == v[i+1].second) 
    	{
    		cout << "NO";
    		return;
    	}
	}
	cout << "YES";
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
		cout << endl;
    }
    return 0;
}