#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

const int MAX_N = 2000;
vector<bool> temp(MAX_N, false);

void dfs(int v, vector<vector<int>> &G) {
  if (temp.at(v)) return;
  temp.at(v) = true;
  for (auto vv : G.at(v)) {
    dfs(vv, G);
  }
}
int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> G(N);
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    G.at(a).push_back(b);
  }

  int ans = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      temp.at(j) = false;
    }
    dfs(i, G);
    for (int j = 0; j < N; j++) {
      if (temp.at(j)) ans++;
    }
  }

  cout << ans << endl;
  return 0;
}