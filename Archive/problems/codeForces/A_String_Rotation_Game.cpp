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
	st s;
	bool pair_char = false;
	int num_blocks = 1, str_len;
	cin >> str_len;
	cin >> s;
	for (int i = 1; i < str_len; ++i)
	{
		if(s[i - 1] != s[i])
			num_blocks++;
		if(s[i - 1] == s[i])
			pair_char = true;
	}
	cout << (s[0] != s[str_len - 1] && pair_char ? num_blocks + 1 : num_blocks) << endl;
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


/*
aaaa -> 1 minimum one block
abcd -> 4 always
abccdd 4 -> 5 cddabc
abbcd 4 -> 5 dcbab
abba 3 -> baab
*/