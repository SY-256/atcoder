#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; ++i) {
    cin >> a.at(i);
  }

  int ans = 0;
  int k = 0;
  bool flag = false;
  for (int i = 0; i < N; ++i) {
    ++ans;
    if ((a.at(k) - 1) == 1) {
      flag = true;
      break;
    };
    k = a.at(k) - 1;
  }
  if (flag)
    cout << ans << endl;
  else
    cout << -1 << endl;

  return 0;
}