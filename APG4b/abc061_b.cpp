#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> ab(N, 0);

  for (int i = 0; i < M; ++i) {
    int a, b;
    cin >> a >> b;
    ab.at(a - 1) += 1;
    ab.at(b - 1) += 1;
  }

  for (int i = 0; i < N; ++i) {
    cout << ab.at(i) << endl;
  }

  return 0;
}