#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	if( x == y)
	{
	    cout << "Draw";
	    return 0;
	}
	cout << (x > y ? "Alice" : "Bob");
}