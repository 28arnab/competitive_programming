
#include <bits/stdc++.h>
using namespace std;

#define LOCAL

template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) {
    return os << '(' << p.first << ", " << p.second << ')';
}

template <
    typename T_container,
    typename T = typename enable_if<
        !is_same<T_container, string>::value,
        typename T_container::value_type
    >::type
>
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

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[1];
    for(auto i = 0; i < n; ++i)
    {
        
    }
}


int32_t main() {
#ifdef ONPC
    auto begin = chrono::high_resolution_clock::now();
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // freopen("in", "r", stdin);
    // freopen("out", "w", stdout);

    cin >> t;
    for (int i = 1; i <= t; i++) {
#ifdef ONPC
        cout << "Case #" << i << ": ";
#endif
        solve();
    }

#ifdef ONPC
    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
#endif
    return 0;
}

