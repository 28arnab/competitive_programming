#include <iostream>
using namespace std;
int main()
{
    double n, q, y, qaly{};
    cin >> n;
    while (n--)
    {
        cin >> q >> y;
        qaly += q * y;
    }
    printf("%.3f", qaly);
    return 0;
}