#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> v(N);
  int sum {};

  for (int i = 0; i < N; i++) {
    cin >> v[i];
    sum += v[i];
  }

  bool pos = false;

  for (int i = 0; i < N; i++) {
    if (sum - v[i] == M) {
      pos = true;
      break;
    }
  }

  if (pos)
    cout << "Yes\n";
  else
    cout << "No\n";

  return 0;
}