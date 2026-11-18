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
    int n;
    cin >> n;

    int on = 0, tw = 0, th = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) on++;
        else if (x == 2) tw++;
        else th++;
    }

    int c13 = min(on, th);
    int c22 = (tw <= 1 ? 0 : tw - 1);

    cout << c13 + c22 << "\n";
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