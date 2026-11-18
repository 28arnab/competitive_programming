
#include <bits/stdc++.h>

#define LOCAL
#define push_back pb
#define emplace_back eb
#define make_pair mp
#define first F
#define second S
#define repi(a,b) for (auto i = a; i <= b; ++i)
#define peri(a,b) for (auto i = b; i >= a; --i)
#define repe(a,b) for (auto i = a; i < b; ++i)
#define pere(a,b) for (auto i = b; i > a; --i)

using namespace std;

using ull = unsigned long long int;
using ll = long long int;
using ld = long double;
using st = string;

using vui = vector<ull>;
using vi = vector<ll>;
using vd = vector<ld>;
using vs = vector<st>;

using pui = vector<pair<ull,ull>>;
using pi = vector<pair<ll,ll>>;
using pd = vector<pair<ld,ld>>;
using ps = vector<pair<st,st>>;

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


void solve() {
    int n {}, sum1{}, sum2{};
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) sum1 += arr[i][j];
            if((i + j) == (n - 1)) sum2 += arr[i][j];
        }
    }
    cout << abs(sum1 - sum2) << endl;
}

int32_t main() {
  auto begin = std::chrono::high_resolution_clock::now();
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  // freopen("in",  "r", stdin);
  // freopen("out", "w", stdout);

  // cin >> t;
  for (int i = 1; i <= t; i++) {
  #ifdef ONPC
    cout << "Case #" << i << ": ";
  #endif
    solve();
  }
  #ifdef ONPC
  auto end = std::chrono::high_resolution_clock::now();
  auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
  cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
  #endif
  return 0;
}
