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
  vector<vector<char>> data(N, vector<char>(N, '-'));
  for (int i = 0; i < M; ++i) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    data.at(a).at(b) = 'o';
    data.at(b).at(a) = 'x';
  }

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      cout << data.at(i).at(j);
      if (j == N - 1) {
        cout << endl;
      } else {
        cout << ' ';
      }
    }
  }

  return 0;
}