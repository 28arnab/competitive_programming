#ifndef ONLINE_JUDGE
#include "cp_header.h"
#else
#include <bits/stdc++.h>
using namespace std;
#endif

void solve() {
  int n{};
  cin >> n;
  vector<int> v1(n);
  vector<int> v2(n);
  for (int& in : v1) cin >> in;
  for (int& in : v2) cin >> in;
  sort(v1.begin(), v1.end());
  sort(v2.begin(), v2.end());
  cout << (v1 == v2 ? "yes" : "no") << endl;
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