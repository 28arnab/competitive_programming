#include <iostream>
using namespace std;
int main()
{
    int n, i{};
    cin >> n;
    while (n > 0)
    {
        if ((n - 100) >= 0)
        {
            n -= 100;
            i++;
        }
        else if ((n - 20) >= 0)
        {
            n -= 20;
            i++;
        }
        else if ((n - 10) >= 0)
        {
            n -= 10;
            i++;
        }
        else if ((n - 5) >= 0)
        {
            n -= 5;
            i++;
        }
        else if ((n - 1) >= 0)
        {
            n -= 1;
            i++;
        }
    }
    cout << i;
    return 0;
}