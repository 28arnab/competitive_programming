// #ifndef ONLINE_JUDGE
// #include "cp_header.h"
// #else
#include <bits/stdc++.h>
using namespace std;
// #endif

using ll = long long;
using ld = long double;
using st = string;

#define F first
#define S second

#define REP(i, a, b) for (ll i = a; i <= b; i++)
#define PER(i, a, b) for (ll i = b; i >= a; i--)

using vll = vector<ll>;
using vld = vector<ld>;
using vs = vector<st>;

using pll = pair<ll, ll>;
using pld = pair<ld, ld>;
using ps = pair<st, st>;

void solve()
{
    int a = 0, b = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.length() - 1; i += 2)
    {
        if (s[i] == 'A')
            a += s[i + 1] - '0';
        else
            b += s[i + 1] - '0';

        if (a >= 10 && b >= 10)
        {
            if (abs(a - b) >= 2)
            {
                cout << (a > b ? 'A' : 'B') << endl;
                return;
            }
        }

        if ((a == 11 || b == 11) && !(a >= 10 && b >= 10))
        {
            cout << (a > b ? 'A' : 'B') << endl;
            return;
        }
    }

    cout << (a > b ? 'A' : 'B') << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}

// Better solution
/* #include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	cout << s[s.size() - 2];
} */