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
  vector<int> v(3);
  cin >> v[0] >> v[1] >> v[2];
  sort(v.rbegin(), v.rend());
  cout << v[0] << v[1] << v[2] << endl;
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