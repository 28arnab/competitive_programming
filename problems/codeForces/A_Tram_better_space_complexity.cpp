#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int i, o, curr{}, max_p{}, s;
    cin >> s;
    vector<int> v;
    for (size_t j = 0; j < s; j++)
    {
        cin >> o >> i;
        curr += i - o;
        max_p = max(curr,max_p);
        // cout << max_p << endl;
    }
    cout << max_p;
    return 0;
}