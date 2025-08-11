#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  vector<int> V(1000);
  for (int i = 0; i < N; ++i) {
    int d;
    cin >> d;
    V.at(d) = 1;
  }
  cout << accumulate(V.begin(), V.end(), 0) << endl;
  return 0;
}