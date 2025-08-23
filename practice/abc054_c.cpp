#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

void dfs(int v, vector<vector<int>> &G, vector<bool> &checked, int &res) {
  bool end = true;
  for (int i = 0; i < checked.size(); i++) {
    if (!checked.at(i) && i != v) { end = false; }
  }
  if (end) {
    ++res;
    return;
  }

  checked.at(v) = true;
  for (auto nv : G.at(v)) {
    if (checked.at(nv)) continue;
    dfs(nv, G, checked, res);
  }
  checked.at(v) = false;
}

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> G(N, vector<int>(N));
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    G.at(a).push_back(b);
    G.at(b).push_back(a);
  }

  vector<bool> checked(N, false);
  int res = 0;
  dfs(0, G, checked, res);

  cout << res << endl;
  return 0;
}