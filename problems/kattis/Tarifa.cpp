#include <iostream>
using namespace std;
int main()
{
    int x, n, xs{};
    cin >> x >> n;
    while (n--)
    {
        int cmds;
        cin >> cmds;
        xs += (x - cmds);
    }
    cout << xs + x;
    return 0;
}