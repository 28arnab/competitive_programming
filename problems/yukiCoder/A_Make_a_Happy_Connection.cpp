/* Author 28arnab */
#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++)
      cin >> v[i];
  for(int i = 0; i < n - 2; i++) {
    if(v[i] == v[i + 1]) {
      cout << "Yes";
      return 0;
    }
    if(v[i] == v[i + 2]) {
      cout << "Yes";
      return 0;
    }
  }
  cout << "No";
  return 0;
}