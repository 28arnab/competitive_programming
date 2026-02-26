#include <iostream>
#include <set>
using namespace std;
int main()
{
    int i;
    set<int> v;
    while (cin >> i)
        v.insert(i);
    cout << 4 - v.size();
    return 0;
}