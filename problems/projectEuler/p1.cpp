#ifndef ONLINE_JUDGE
#include "cp_header.h"
#else
#include <bits/stdc++.h>
using namespace std;
#endif

void solve() {
  long long n;
  cin >> n;
  long long m3 = (n - 1) / 3;
  long long m5 = (n - 1) / 5;
  long long m15 = (n - 1) / 15;

  cout << 3 * m3 * (m3 + 1) / 2 + 5 * m5 * (m5 + 1) / 2 -
              15 * m15 * (m15 + 1) / 2
       << "\n";
}

int32_t main() {
#ifdef LOCAL
  auto begin = chrono::high_resolution_clock::now();
#endif

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
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