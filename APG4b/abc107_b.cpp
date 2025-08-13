#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<char>> data(H, vector<char>(W));
  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      cin >> data.at(i).at(j);
    }
  }

  for (int i = 0; i < H; ++i) {
    bool flag = true;
    for (int j = 0; j < W; ++j) {
      if (data.at(i).at(j) == '#') {
        flag = false;
        break;
      }
    }
    if (flag == true) {
      for (int j = 0; j < W; ++j) {
        data.at(i).at(j) = 'x';
      }
    }
  }

  for (int j = 0; j < W; ++j) {
    bool flag = true;
    for (int i = 0; i < H; ++i) {
      if (data.at(i).at(j) == '#') {
        flag = false;
        break;
      }
    }
    if (flag == true) {
      for (int i = 0; i < H; ++i) {
        data.at(i).at(j) = 'x';
      }
    }
  }

  vector<string> ans;
  for (int i = 0; i < H; ++i) {
    string ans_str = "";
    for (int j = 0; j < W; ++j) {
      if (data.at(i).at(j) != 'x') ans_str += data.at(i).at(j);
    }
    if (ans_str.length() > 0) { ans.push_back(ans_str); }
  }

  for (int i = 0; i < (int)ans.size(); ++i) {
    cout << ans.at(i) << endl;
  }

  return 0;
}