#include <iostream>
using namespace std;
int main()
{
    int t, l, c, n{};
    cin >> t;
    while (t--)
    {
        cin >> l >> c;
        if ((c - l) >= 2)
            n++;
    }
    cout << n;
    return 0;
}