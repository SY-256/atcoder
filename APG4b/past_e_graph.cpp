#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int N, M, Q;
  cin >> N >> M >> Q;

  // 頂点数NのグラフGを定義
  vector<vector<int>> G(N);

  // M本の辺を順番に受け取る
  for (int i = 0; i < M; ++i) {
    int u, v;
    cin >> u >> v;
    --u, --v;

    G.at(u).push_back(v);
    G.at(v).push_back(u);
  }

  // 初期状態の各頂点の色
  vector<int> col(N);
  for (int i = 0; i < N; ++i) {
    cin >> col.at(i);
  }

  // 各クエリに答える
  for (int i = 0; i < Q; ++i) {
    int t, x;
    cin >> t >> x;

    // 頂点番号を0始まりにする
    --x;

    cout << col.at(x) << endl;

    // タイプ1の場合
    if (t == 1) {
      // 頂点xに隣接する各頂点vの色を更新
      for (auto v : G[x]) {
        col.at(v) = col.at(x);
      }
    }
    // タイプ2の場合
    else {
      int y;
      cin >> y;

      // 頂点xの色をyに更新
      col.at(x) = y;
    }
  }
  return 0;
}