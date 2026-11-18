#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr(3);
        for (int &i : arr)
        {
            cin >> i;
        }
        if (arr[0] == arr[1] && arr[0] == arr[2])
        {
            cout << arr[0] * 10 << endl;
            continue;
        }
        sort(arr.begin(), arr.end());
        cout << ((arr[0] * 10) + ((arr[1] - arr[0]) * 3) + ((arr[2] - arr[0]) * 3)) << endl;
    }
}
