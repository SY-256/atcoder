#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

void fill_island(vector<vector<char>> &board, vector<vector<bool>> &checked, int y, int x) {
  if (y < 0 || x < 0 || y >= 10 || x >= 10) { return; }
  if (board.at(y).at(x) == 'x') { return; }
  if (checked.at(y).at(x)) { return; }

  checked.at(y).at(x) = true;
  fill_island(board, checked, y - 1, x); // 上
  fill_island(board, checked, y, x - 1); // 左
  fill_island(board, checked, y + 1, x); // 下
  fill_island(board, checked, y, x + 1); // 右
}

bool check_connected(vector<vector<char>> &board) {
  vector<vector<bool>> checked(10, vector<bool>(10, false));

  // 陸地マスを1つ探す
  int y, x;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (board.at(i).at(j) == 'o') {
        y = i;
        x = j;
        break;
      }
    }
  }
  // 引数：盤面、チェック二次元配列、y座標、x座標
  fill_island(board, checked, y, x);

  bool ok = true;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (board.at(i).at(j) == 'o') {
        if (!checked.at(i).at(j)) {
          // 到達できない陸地マスがある
          ok = false;
        }
      }
    }
  }

  // ok = tureならすべての陸地マスは繋がっている
  return ok;
}

int main() {
  vector<vector<char>> board(10, vector<char>(10));
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      cin >> board.at(i).at(j);
    }
  }

  for (int y = 0; y < 10; y++) {
    for (int x = 0; x < 10; x++) {
      if (board.at(y).at(x) == 'o') continue;
      // (y, x)は海のマス
      // ここを埋め立てたと仮定して1つになるか判定

      board.at(y).at(x) = 'o'; // 埋め立てたと仮定

      if (check_connected(board)) {
        cout << "YES" << endl;
        return 0;
      }

      board.at(y).at(x) = 'x';
    }
  }
  cout << "NO" << endl;
}