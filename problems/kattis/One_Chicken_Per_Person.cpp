#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a < b)
    {
        if (abs(a - b) > 1)
            cout << "Dr. Chaz will have " << abs(a - b) << " pieces of chicken left over!";
        if (abs(a - b) == 1)
            cout << "Dr. Chaz will have " << abs(a - b) << " piece of chicken left over!";
        goto d;
    }
    else if (a > b)
    {
        if (abs(a - b) > 1)
            cout << "Dr. Chaz needs " << abs(a - b) << " more pieces of chicken!";
        if (abs(a - b) == 1)
            cout << "Dr. Chaz needs " << abs(a - b) << " more piece of chicken!";
        goto d;
    }
d:
    return 0;
}