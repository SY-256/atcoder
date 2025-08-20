#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

// グリッド上の迷路（探索）
// 正しい移動か調べる（y, x）が移動先
bool is_valid_move(vector<string> &board, vector<vector<bool>> &checked, int x, int y) {
  int N = board.size();

  // 移動先がマス目の外である場合
  if (x <= -1 || x >= N || y <= -1 || y >= N) { return false; }
  // 移動先が壁マス
  if (board.at(y).at(x) == '#') { return false; }
  // 既に調べているマスへの移動は調べないのでfalse返す
  if (checked.at(y).at(x)) { return false; }

  // それ以外なら正しい移動
  return true;
}

// (y, x)にいる状態からゴールできるか
// board: マス目の種類
// checked: そのマスを既に調べたかを持つ二次元配列
bool reachable(vector<string> &board, vector<vector<bool>> &checked, int x, int y) {
  int N = board.size();

  // ベースケース
  if (x == N - 1 && y == N - 1) {
    // ゴールにいる状態
    return true;
  }

  // 再帰ステップ
  checked.at(y).at(x) = true;

  // 「上下左右」のいずれかの移動でゴールに到達できるか
  bool result = false;

  // 上に移動したらゴールに到達できるか
  if (is_valid_move(board, checked, x, y - 1) && reachable(board, checked, x, y - 1)) { result = true; }
  // 右に移動してゴールに到達できるか
  if (is_valid_move(board, checked, x + 1, y) && reachable(board, checked, x + 1, y)) { result = true; }
  // 下に移動してゴールに到達できるか
  if (is_valid_move(board, checked, x, y + 1) && reachable(board, checked, x, y + 1)) { result = true; }
  // 左に移動してゴールに到達できるか
  if (is_valid_move(board, checked, x - 1, y) && reachable(board, checked, x - 1, y)) { result = true; }

  return result;
}

int main() {
  int N;
  cin >> N;
  // マス目の情報を受け取る
  vector<string> board(N);
  for (int i = 0; i < N; ++i) {
    cin >> board.at(i);
  }

  // 既にそのマスを調べたかを保持する二次元配列
  vector<vector<bool>> checked(N, vector<bool>(N, false));

  // (0, 0)からゴールに到達可能か
  if (reachable(board, checked, 0, 0)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}