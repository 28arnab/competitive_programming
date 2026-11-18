#include <iostream>
using namespace std;
int main()
{
    int n, minv = 101, maxv = 0, mini, maxi, a;
    cin >> n;
    for (size_t i = 1; i <= n; i++)
    {
        cin >> a;
        if (minv >= a)
        {
            minv = a;
            mini = i;
        }
        if (maxv < a)
        {
            maxv = a;
            maxi = i;
        }
    }
    if (maxi > mini)
        cout << (maxi - 1) + (n - mini - 1);
    else
        cout << (maxi - 1) + (n - mini);
    return 0;
}