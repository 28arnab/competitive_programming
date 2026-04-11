/* Author: Arnab Sarkar */
#ifndef ONLINE_JUDGE
#include "cp_header.hpp"
#else
#include <bits/stdc++.h>
using namespace std;
#endif

using ll = long long;
using ld = long double;
using st = string;

#define F first
#define S second
#define B begin
#define E end

#define REP(i, a, b) for (ll i = (a); i <= (b); i++)
#define PER(i, a, b) for (ll i = (b); i >= (a); i--)

using vll = vector<ll>;
using vld = vector<ld>;
using vs = vector<st>;

using pll = pair<ll, ll>;
using pld = pair<ld, ld>;
using ps = pair<st, st>;

vector<int> get_primes(int limit)
{
  vector<bool> is_prime(limit, true);
  vector<int> primes;

  is_prime[0] = is_prime[1] = false;

  for (int i = 2; i < limit; i++)
  {
    if (is_prime[i])
    {
      primes.push_back(i);
      for (long long j = 1LL * i * i; j < limit; j += i)
        is_prime[j] = false;
    }
  }
  return primes;
}

void solve()
{
  vector<int> primes = get_primes(200000);
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    if (i)
      cout << ' ';
    cout << 1LL * primes[i] * primes[i + 1];
  }
}

int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
    cout << endl;
  }
  return 0;
}