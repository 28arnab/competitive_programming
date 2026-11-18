#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i < v.size(); i++)
    {
        cin >> n;
        v[n] = i;
    }
    for (int i : v)
    {
        if (i == 0)
            continue;
        cout << i << " ";
    }
    return 0;
}