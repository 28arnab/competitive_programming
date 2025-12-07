/* Author: Arnab Sarkar */
/* atcoder: arnab28 */
/* codeforces: 28arnab */
/* codechef: arnabs28 */
/* cses: 28arnab */

#include <bits/stdc++.h>

using namespace std;

#define sq(x) ((x) * (x))
#define make_pair mp
#define push_back pb
#define emplace_back eb
#define rep(i, a, b) for (auto i = (a); i <= (b); ++i)
#define per(i, b, a) for (auto i = (b); i >= (a); --i)

using ull = unsigned long long;
using ll = long long;
using ui = unsigned int;
using ld = long double;
using st = string;

template <typename C, typename T>
inline T sum_container(const C &container, T init)
{
  return accumulate(container.begin(), container.end(), init);
}

void solve();

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int num_tests;
  cin >> num_tests;
  while (num_tests--)
  {
    solve();
  }
  return 0;
}
void solve()
{
  int n, a, b;
  cin >> n >> a >> b;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i].first >> v[i].second;

  int min_dist = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    int dist = abs(v[i].first - a) + abs(v[i].second - b);
    min_dist = min(min_dist, dist);
  }
  cout << min_dist << "\n";
}