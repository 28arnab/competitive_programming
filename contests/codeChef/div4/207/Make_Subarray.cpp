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
    solve();
  return 0;
}
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;

  int first = -1, last = -1;
  for (int i = 0; i < n; i++)
    if (s[i] == '1')
    {
      first = i;
      break;
    }
  for (int i = n - 1; i >= 0; i--)
    if (s[i] == '1')
    {
      last = i;
      break;
    }

  if (first == -1)
  {
    cout << 0 << "\n";
    return;
  }

  int num_op = 0;
  for (int i = first + 1; i < last; i++)
    if (s[i] == '0')
      num_op++;
  cout << num_op << "\n";
}
