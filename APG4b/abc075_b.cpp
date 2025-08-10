#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

// 上下がDX, 左右がDYで置いてる
vector<int> DX = {1, 0, -1, 0, 1, -1, -1, 1};
vector<int> DY = {0, 1, 0, -1, 1, 1, -1, -1};

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  for (auto &row : S) {
    cin >> row;
  }

  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      // 空きマスそのまま
      if (S[i][j] != '.') continue;

      // 周囲の8マスの'#'を数える
      int counter = 0;
      for (int d = 0; d < 8; ++d) {
        int ni = i + DX[d];
        int nj = j + DY[d];

        if (ni < 0 || ni >= H || nj < 0 || nj >= W) continue;

        // '#'であれば1増やす
        if (S[ni][nj] == '#') ++counter;
      }
      // マス（i, j）に個数をchar型に変換して記録
      S[i][j] = '0' + counter;
    }
  }

  // 出力
  for (auto row : S)
    cout << row << endl;

  return 0;
}