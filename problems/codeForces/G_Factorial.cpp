/* Author: Arnab Sarkar */
/* codeforces: 28arnab */
/* atcoder: arnab28 */
/* codechef: arnabs28 */
/* cses: 28arnab */

#include <iostream>
using namespace std;

using ull = unsigned long long int;
using ll = long long int;
using ld = long double;
using st = string;

void solve();
ll factorial(int in);

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int num_test;
  cin >> num_test;
  while (num_test--)
    solve();
  return 0;
}

void solve() {
  int in{};
  cin >> in;
  cout << factorial(in) << "\n";
}
ll factorial(int in) {
    ll out = 1;
    in++;
    while (in--) {
      if(in == 0)
        break;
     out *= in;
    }
    return out;
}