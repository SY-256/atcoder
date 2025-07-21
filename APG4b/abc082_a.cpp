#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int a, b;
  cin >> a >> b;

  int ans = (a + b + 2 - 1) / 2;

  cout << ans << endl;
  return 0;
}