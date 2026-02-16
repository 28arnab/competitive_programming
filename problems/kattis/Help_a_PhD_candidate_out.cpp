#include <iostream>
using namespace std;
int main()
{
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (s[0] == 'P')
        {
            cout << "skipped\n";
            continue;
        }
        int a, b, plus_pos;
        plus_pos = s.find('+');
        a = stoi(s.substr(0, plus_pos));
        b = stoi(s.substr(plus_pos + 1));
        cout << a + b << endl;
    }
    return 0;
}