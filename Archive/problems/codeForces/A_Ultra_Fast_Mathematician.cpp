#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    for (size_t i = 0; i < a.length(); i++)
    {
        if ((a[i] == '1' && b[i] == '0') || (b[i] == '1' && a[i] == '0'))
            cout << 1;
        else
            cout << 0;
    }
    cout << endl;
    return 0;
}