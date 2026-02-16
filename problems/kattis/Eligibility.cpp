#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string name, cd, bd;
        int nc;

        cin >> name >> cd >> bd >> nc;

        int startYear = stoi(cd.substr(0, 4));
        int birthYear = stoi(bd.substr(0, 4));

        cout << name << " ";

        if (startYear >= 2010)
        {
            cout << "eligible";
        }
        else if (birthYear >= 1991)
        {
            cout << "eligible";
        }
        else if (nc >= 41)
        {
            cout << "ineligible";
        }
        else
        {
            cout << "coach petitions";
        }

        cout << endl;
    }

    return 0;
}
