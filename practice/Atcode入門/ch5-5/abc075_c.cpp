#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

struct UnionFind {
  vector<int> par;

  UnionFind() {}
  UnionFind(int n) : par(n, -1) {}
  void init(int n) {
    par.assign(n, -1);
  }

  int root(int x) {
    if (par[x] < 0)
      return x;
    else
      return par[x] = root(par[x]);
  }

  bool issame(int x, int y) {
    return root(x) == root(y);
  }

  bool merge(int x, int y) {
    x = root(x);
    y = root(y);
    if (x == y) return false;
    if (par[x] > par[y]) swap(x, y);
    par[x] += par[y];
    par[y] = x;
    return true;
  }

  int size(int x) {
    return -par[root(x)];
  }
};

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> A.at(i) >> B.at(i);
    --A.at(i), --B.at(i);
  }

  // 各辺を外してUnion-Findで判定
  int res = 0;
  for (int i = 0; i < M; i++) {
    UnionFind uf(N);
    for (int j = 0; j < M; j++) {
      // 辺iを除外
      if (j == i) continue;

      uf.merge(A.at(j), B.at(j));
    }

    // 連結成分の個数を求める
    int num = 0;
    for (int v = 0; v < N; v++) {
      if (uf.root(v) == v) ++num;
    }
    // 連結成分数が1より大きいと非連結
    if (num > 1) res++;
  }
  cout << res << endl;
  return 0;
}