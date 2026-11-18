#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, i, s{};
    cin >> a >> i;
    while (ceil(s / a) < i)
    {
        s++;
    }
    cout << s;
    return 0;
}