#ifndef ONLINE_JUDGE
#include "cp_header.h"
#else
#include <bits/stdc++.h>
using namespace std;
#endif

void solve() {
  int n, is{},cnt{};
  cin >> n;
  vector<int> v(n);
  for (int& in : v) cin >> in;
  for(int i = 0; i < n; i++){
    if(v[i] % 2 != 0) goto done;
    if(v[i] % 2 == 0){
      v[i] /= 2;
      cnt++;
    }
    // dbg(i);
    if(cnt == n) {
      is++;
      cnt = 0;
      i = -1;
    }
  }
  cout << is << endl;
  return;
  done:
    cout << is << endl;
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