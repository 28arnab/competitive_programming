#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int i, o, mc{}, m{}, s;
    cin >> s;
    vector<int> v;
    for (size_t j = 0; j < s; j++)
    {
        cin >> o >> i;
        mc += i - o;
        v.emplace_back(mc);
    }
    sort(v.rbegin(), v.rend());
    cout << v[0];
    return 0;
}

/*
10
0 5 -> 5
1 7 -> 11
10 8 -> 9
5 3 -> 7
0 5 -> 12
3 3 -> 12
8 8 -> 12
0 6 -> 18
10 1 -> 9
9 0 -> 0
*/