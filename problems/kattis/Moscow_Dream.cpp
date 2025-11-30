#include <iostream>
using namespace std;
int main(){
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    cout << ((a >= 1 && b >= 1 && c >= 1 && a+b+c >= n && n >= 3) ? "YES" : "NO");
    return 0;
}