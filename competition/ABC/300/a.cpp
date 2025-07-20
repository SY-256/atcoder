#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  vector<int> C(N);
  for (int i = 0; i < N; ++i)
    cin >> C[i];

  int ans = 0;
  for (int i = 0; i < N; i++) {
    if ((A + B) == C[i]) {
      ans = i + 1;
      break;
    }
  }

  cout << ans << endl;
  return 0;
}