#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (!(a % b))
            cout << 0;
        else
        {
            cout << b - (a % b);
        }
        cout << endl;
    }
    return 0;
}