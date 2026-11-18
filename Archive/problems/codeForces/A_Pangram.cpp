#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n, c = 1;
    cin >> n;
    string s;
    cin >> s;
    for (auto &x : s)
    {
        x = tolower(x);
    }
    sort(s.begin(), s.end());
    // cout << s;
    for (size_t i = 0; i < s.size() - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            c++;
        }
    }
    // cout << c;
    cout << (c == 26 ? "YES" : "NO");
    return 0;
}

/*
aaabbdaad
aaaaabbdd
*/