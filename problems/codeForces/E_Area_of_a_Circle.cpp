/* Author: Arnab Sarkar */
/* codeforces: 28arnab */
/* atcoder: arnab28 */
/* codechef: arnabs28 */
/* cses: 28arnab */

#include <cmath>
#include <iomanip>
#include <iostream>
#define pi 3.141592653
using namespace std;

using ull = unsigned long long int;
using ll = long long int;
using ld = long double;
using st = string;

void solve();

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int num_test = 1;
  // cin >> num_test;
  while (num_test--)
    solve();
  return 0;
}

void solve() { 
    ld r {};
    cin >> r;
    cout << fixed << setprecision(9); 
    cout << pi * pow(r, 2);
}