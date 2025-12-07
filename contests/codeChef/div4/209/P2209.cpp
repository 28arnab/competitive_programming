// Problem: Divisible Duel
// Contest: CodeChef - START209D
// URL: https://www.codechef.com/START209D/problems/P2209
// Memory Limit: 256 MB
// Time Limit: 1000 ms

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
  int num_test;
  cin >> num_test;
  while (num_test--) solve();
  return 0;
}

void solve() {
  int x, y, o{}, e{};
  cin >> x >> y;
  for (int i = x; i <= y; i++) {
    for (int i = x; i <= y; i++) {
      if (i % x == 0)
        if (i % 2 == 0)
          e += i;
        else
          o += i;
    }
  }
  cout << (e >= o ? "YES\n" : "NO\n");
}
