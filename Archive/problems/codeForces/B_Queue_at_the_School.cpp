#include <iostream>
using namespace std;
int main()
{
    int n, t;
    string s;
    cin >> n >> t >> s;
    while (t--)
    {
        for (size_t i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                s[i] = 'G';
                s[i + 1] = 'B';
                i++;
            }
        }
    }
    cout << s;
    return 0;
}
/*
test 1
BGGBG I
GBGBG T = 1

test 2
BGGBG I
GBGBG T = 1
GGBBG T = 2
GGBGB
*/