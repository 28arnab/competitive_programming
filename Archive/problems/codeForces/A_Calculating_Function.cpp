#include <iostream>
using namespace std;
int main()
{
    long long i;
    cin >> i;
    if (i % 2 == 0)
        cout << i / 2;
    else
        cout << ((i + 1)/2) * -1;
    return 0;
}