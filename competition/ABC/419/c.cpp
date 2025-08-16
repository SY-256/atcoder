#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

// わかんなかった
// チェビシェフ距離の問題
int main() {
  int N;
  cin >> N;
  vector<int> x(N), y(N);
  for (int i = 0; i < N; ++i)
    cin >> x.at(i) >> y.at(i);
  int X = *max_element(x.begin(), x.end()) - *min_element(x.begin(), x.end());
  int Y = *max_element(y.begin(), y.end()) - *min_element(y.begin(), y.end());
  int ans = ((max(X, Y) + 1) / 2);
  cout << ans << endl;

  return 0;
}