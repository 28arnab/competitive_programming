#ifndef ONLINE_JUDGE
#include "cp_header.h"
#else
#include <bits/stdc++.h>
using namespace std;
#endif

void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (c >= a && d < b)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}

int32_t main() {
#ifdef LOCAL
  auto begin = chrono::high_resolution_clock::now();
#endif

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  for (int i = 1; i <= t; i++) {
#ifdef LOCAL
    cout << "Case #" << i << ": ";
#endif
    solve();
  }

#ifdef LOCAL
  auto end = chrono::high_resolution_clock::now();
  cerr << "Time: "
       << chrono::duration_cast<chrono::microseconds>(end - begin).count()
       << " µs\n";
#endif
  return 0;
}