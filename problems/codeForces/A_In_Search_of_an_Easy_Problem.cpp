#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int s;
        cin >> s;
        if (s == 1)
        {
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
    return 0;
}