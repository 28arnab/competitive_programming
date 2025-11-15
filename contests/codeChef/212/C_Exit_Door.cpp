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
  int n, max, r{};
  cin >> n;
  vector<int> si(n);
  for (int &in : si)
    cin >> in;
  while (!si.empty()) {
    auto maxx = distance(si.begin(), max_element(si.begin(), si.end()));
    if (maxx < si.size() - 1 - maxx)
      r += maxx;
    else
      r += si.size() - 1 - maxx;
    si.erase(si.begin() + maxx);
  }
  cout << r << endl;
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