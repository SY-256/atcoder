#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

bool is_valid_move(vector<vector<char>> &board, vector<vector<bool>> &checked, int y, int x) {
  int H = board.size();
  int W = board.at(0).size();
  if (y <= -1 || x <= -1 || y >= H || x >= W) return false;
  if (checked.at(y).at(x)) return false;
  if (board.at(y).at(x) == '#') return false;

  return true;
}

bool reachable(vector<vector<char>> &board, vector<vector<bool>> &checked, int y, int x) {

  if (board.at(y).at(x) == 'g') return true;

  checked.at(y).at(x) = true;

  bool result = false;
  if (is_valid_move(board, checked, y - 1, x) && reachable(board, checked, y - 1, x)) result = true;
  if (is_valid_move(board, checked, y + 1, x) && reachable(board, checked, y + 1, x)) result = true;
  if (is_valid_move(board, checked, y, x - 1) && reachable(board, checked, y, x - 1)) result = true;
  if (is_valid_move(board, checked, y, x + 1) && reachable(board, checked, y, x + 1)) result = true;

  return result;
}

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<char>> board(H, vector<char>(W));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> board.at(i).at(j);
    }
  }

  vector<vector<bool>> checked(H, vector<bool>(W, false));

  int y, x;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (board.at(i).at(j) == 's') {
        y = i;
        x = j;
      }
    }
  }
  if (reachable(board, checked, y, x)) {
    cout << "Yes" << endl;
    return 0;
  }

  cout << "No" << endl;
}