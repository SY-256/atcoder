#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int N, S;
  cin >> N >> S;
  vector<int> A(N);
  vector<int> P(N);

  for (int i = 0; i < N; ++i) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; ++i) {
    cin >> P.at(i);
  }

  int ans = 0;
  for (int i = 0; i < (int)A.size(); ++i) {
    for (int j = 0; j < (int)P.size(); ++j) {
      if (S == (A.at(i) + P.at(j))) ++ans;
    }
  }

  cout << ans << endl;
  return 0;
}