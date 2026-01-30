#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    if (y == 1)
    {
        if (x == 0)
            cout << "ALL GOOD";
        else
            cout << "IMPOSSIBLE";
    }
    else
    {
        if (x / double(y - 1) > floor(x / double(y - 1)) && x / double(y - 1) < ceil(x / double(y - 1)))
            cout << fixed << setprecision(9) << x / double(y - 1) * -1;
        else
            cout << fixed << setprecision(9) << x / (y - 1) * -1;
    }
    return 0;
}