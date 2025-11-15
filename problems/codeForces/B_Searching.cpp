// Problem: B. Searching
// Contest: Codeforces - Sheet #3 (Arrays)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
// Memory Limit: 64 MB
// Time Limit: 2000 ms

/* Author: Arnab Sarkar */
/* codeforces: 28arnab */
/* atcoder: arnab28 */
/* leetcode: 28arnab */
/* codechef: arnabs28 */
/* cses: 28arnab */

#define LOCAL

#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long int;
using ll = long long int;
using ld = long double;
using st = string;

template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) {
  return os << '(' << p.first << ", " << p.second << ')';
}

template <typename T_container, typename T = typename enable_if<
                                    !is_same<T_container, string>::value,
                                    typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v) {
  os << '{';
  string sep;
  for (const T &x : v) os << sep << x, sep = ", ";
  return os << '}';
}

void dbg_out() { cerr << endl; }

template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}

#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

void solve();

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int num_test = 1;
  // cin >> num_test;
  while (num_test--) solve();
  return 0;
}

void solve() {
  int n, t;
  bool not_found = false;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> t;
  for (int i = 0; i < n; i++) {
    if (a[i] == t) {
      cout << i;
      return;
    }
  }
  not_found = true;
  if (not_found) cout << -1;
}