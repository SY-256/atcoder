#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int N, M;

  cin >> N;
  vector<string> s(N);
  for (int i = 0; i < N; ++i) {
    cin >> s.at(i);
  }

  cin >> M;
  vector<string> t(M);
  for (int i = 0; i < M; ++i) {
    cin >> t.at(i);
  }

  int ans = 0;
  for (int i = 0; i < N; ++i) {
    int s_num = count(s.begin(), s.end(), s.at(i));
    int t_num = count(t.begin(), t.end(), s.at(i));
    ans = max((s_num - t_num), ans);
  }
  cout << ans << endl;
  return 0;
}