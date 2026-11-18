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

int sum_digits(int y)
{
    int sum_of_digits {};
    while (y != 0)
    {
        sum_of_digits += y % 10;
        y /= 10;
    }
    return sum_of_digits;
}
void solve()
{
	int x, num_friendly {}, y;
	cin >> x;
	y = x;
	// dbg(sum_digits(x));
	while (y < x + 100)
	{
		if( y - sum_digits(y) == x)
			num_friendly++;
		y++;
	}
	cout << num_friendly << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    for(auto i = 1; i <= t; i++)
    {
    	// cerr << "Test Case " << i << ":" << endl;
        solve();
    }
    return 0;
}