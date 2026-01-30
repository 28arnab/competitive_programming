#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x == y)
        {
            cout << "=" << endl;
            continue;
        }
        cout << (x > y ? ">" : "<") << endl;
    }

    return 0;
}