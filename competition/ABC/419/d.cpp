#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

// 累積和
int main() {
  int N, M;
  cin >> N >> M;

  string s, t;
  cin >> s >> t;

  vector<int> swap_count(N, 0);

  for (int i = 0; i < M; i++) {
    int L, R;
    cin >> L >> R;
    --L;
    --R;

    int left = max(0, L);
    int right = min(N - 1, R);

    if (left <= right) {
      swap_count[left]++;
      if (right + 1 < N) { swap_count[right + 1]--; }
    }
  }

  for (int i = 1; i < N; i++) {
    swap_count[i] += swap_count[i - 1];
  }

  // 結果を出力
  for (int i = 0; i < N; i++) {
    if (swap_count[i] % 2 == 0) {
      cout << s[i];
    } else {
      cout << t[i];
    }
  }
  cout << endl;

  return 0;
}