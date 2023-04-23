#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int N, T;
  cin >> N >> T;
  vector<int> C(N);
  vector<int> R(N);

  // 入力
  for (int i = 0; i < N; ++i)
    cin >> C[i];
  for (int i = 0; i < N; ++i)
    cin >> R[i];

  int max_R = 0;
  int max_index = 0;
  int ans = 0;
  int ans_index = 0;
  int player_1_R = R[0];
  int player_1_C = C[0];
  for (int i = 0; i < N; i++) {
    if (T == C[i]) {
      if (R[i] > max_R) {
        max_R = R[i];
        max_index = i + 1;
      }
    }
    if (player_1_C == C[i]) {
      if (R[i] > ans) {
        ans = R[i];
        ans_index = i + 1;
      }
    }
  }
  if (max_R != 0) { ans_index = max_index; }

  cout << ans_index << endl;
  return 0;
}