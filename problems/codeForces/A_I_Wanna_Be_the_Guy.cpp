#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n, x, y, p{};
    set <int> v;
    cin >> n;
    cin >> x;
    while (x--)
    {
        cin >> p;
        v.insert(p);
    }
    cin >> y;
    while (y--)
    {
        cin >> p;
        v.insert(p);
    }
    // cout << p << endl;
    cout << (n == v.size() ? "I become the guy." : "Oh, my keyboard!");
    return 0;
}