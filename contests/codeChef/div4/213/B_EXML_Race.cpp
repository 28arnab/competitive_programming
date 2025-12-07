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
	int n, car = 1;
	cin >> n;
	for(int i = 1; i <= n; i++){
		int d,t,maxx;
		cin >> d >> t;
		if( i == 1)
			maxx = d/t;
		else if(maxx < d/t && i > 1){
			maxx = d/t;
			car = i;
			// dbg(car);
		}
	}
	cout << car << endl;
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