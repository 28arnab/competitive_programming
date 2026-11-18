#ifndef ONLINE_JUDGE
#include "cp_header.h"
#else
#include <bits/stdc++.h>
using namespace std;
#endif

void solve() {
  int n, is{};
  cin >> n;
  vector<int> v(n);
  for (int& in : v) cin >> in;
  for (int i = 0; i < n; i++) {
    is++;
    for (int j = i + 1; j < n; j++) {
      if (v[j] >= v[j - 1])
        is++;
      else
        break;
    }
  }
  cout << is << endl;
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