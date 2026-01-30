#include <iostream>
using namespace std;
int main()
{
    int g, s, c, bp{};
    cin >> g >> s >> c;
    bp += g * 3 + s * 2 + c * 1;
    if (bp >= 8)
    {
        cout << "Province or";
    }
    else if (bp >= 5)
    {
        cout << "Duchy or";
    }
    else if (bp >= 2)
    {
        cout << "Estate or";
    }
    if (bp >= 6)
    {
        cout << " Gold";
    }
    else if (bp >= 3)
    {
        cout << " Silver";
    }
    else if (bp >= 0)
    {
        cout << " Copper";
    }
    cout << endl;
    return 0;
}