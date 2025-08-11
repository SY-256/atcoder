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

  vector<string> A(H);
  for (int i = 0; i < H; ++i) {
    cin >> A.at(i);
  }

  string border(W + 2, '#');
  for (int i = 0; i < (H + 1); ++i) {
    if (i == 0) {
      cout << border << endl;
      cout << '#' + A.at(i) + '#' << endl;
    } else if (i == H) {
      cout << border << endl;
    } else {
      cout << '#' + A.at(i) + '#' << endl;
    }
  }

  return 0;
}