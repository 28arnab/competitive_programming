#include <iostream>
using namespace std;
int main()
{
    string s;
again:
    while (getline(cin, s))
    {
        cout << s << endl;
        goto again;
    }
    return 0;
}