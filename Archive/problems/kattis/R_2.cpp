#include <iostream>
using namespace std;
/*
s = (r1 + r2)/2
=> r2 = 2 * s - r1
*/
int main()
{
    int s, r1, r2;
    cin >> r1 >> s;
    cout << 2 * s - r1;
    return 0;
}