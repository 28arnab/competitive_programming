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
  st str;
  int lt{}, nt{}, rt{};
  cin >> str;

  ll n = str.length();
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == '<')
      lt++;
    else if (str[i] == '>')
      rt++;
    else if (str[i] == '*')
      nt++;
  }

  if (str.find("><") != string::npos || str.find("**") != string::npos ||
      str.find(">*") != string::npos || str.find("*<") != string::npos) {
    cout << -1 << "\n";
    return;
  }
  cout << max(lt + nt,rt + nt) << endl;
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