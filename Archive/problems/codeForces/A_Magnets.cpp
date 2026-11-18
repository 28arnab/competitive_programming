#include <iostream>
using namespace std;
int main()
{
    int n, g{}, t, i;
    cin >> n;
    while (n--)
    {
        cin >> i;
        if (n == n - 1)
        {
            t = i;
            continue;
        }
        if (t != i)
        {
            g++;
            t = i;
        }
    }
    cout << g;
    return 0;
}