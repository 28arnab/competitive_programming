#include <iostream>
using namespace std;
int main()
{
    int n, h, w{}, i;
    cin >> n >> h;
    while (n--)
    {
        cin >> i;
        if (i > h)
            w += 2;
        else
            w++;
    }
    cout << w;
    return 0;
}