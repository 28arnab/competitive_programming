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
    int n, y, r;
    cin >> n >> y >> r;
    if(floor(y/2) + r > n){
        cout << n << endl;
    }
    else {
        cout << floor(y/2) + r << endl;
    }
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}