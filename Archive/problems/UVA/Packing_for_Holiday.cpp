#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int l, w, h;
        cin >> l >> w >> h;
        cout << "Case " << i << (l > 20 || w > 20 || h > 20 ? ": bad" : ": good") << endl;
    }
    return 0;
}