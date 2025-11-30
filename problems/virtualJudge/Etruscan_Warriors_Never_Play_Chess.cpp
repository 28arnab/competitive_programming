#ifndef ONLINE_JUDGE
#include "cp_header.h"
#else
#include <bits/stdc++.h>
using namespace std;
#endif

#define f first
#define s second

using ll = long long;
using ld = long double;
using st = string;
using vll = vector<ll>;
using vld = vector<ld>;
using vs = vector<st>;

void solve() {
	ll n;
	cin >> n;
	ld x = floor( (-1 + sqrtl(1 + 8*(ld)n)) / 2 );
	ll r = (ll)x;
	while((__int128)(r*(r + 1))/2 > n)
		r--;
	cout << r << endl;
}

int32_t main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
   cin >>  t;
  for (int i = 1; i <= t; i++) {
    // #ifdef LOCAL
    //     cout << "Case #" << i << ": ";
    // #endif
    solve();
  }
  return 0;
}