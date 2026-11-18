#include <iostream>
using namespace std;
int main()
{
    double n, p, t{}, nn;
    cin >> n;
    nn = n;
    while (n--)
    {
        cin >> p;
        t += p;
        // cout << t << endl;
    }
    t /= nn;
    printf("%.12f", t);
    return 0;
}