#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int N, X, A[109];
  bool Answer = false;
  cin >> N >> X;
  for (int i = 1; i <= N; i++) cin >> A[i];

  // 全探索
  for (int i=1; i <= N; i++) {
    if (A[i] == X) Answer = true;
  }

  // 出力
  if (Answer == true) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}