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

  vector<int> C(N);
  for (int i = 0; i < N; ++i)
    cin >> C[i];

  // 入力
  int ans = 1000000;
  for (int i = 1; i < 102; i++) {
    int tmp_ans = 0;
    for (int j = 0; j < N; j++) {
      tmp_ans += pow((i - C[j]), 2);
    }
    ans = min(ans, tmp_ans);
  }

  cout << ans << endl;
  return 0;
}