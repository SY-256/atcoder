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

  for (int x = 9; x >= 0; x--) {
    int wari = (1 << x); // 2のx乗
    cout << (N / wari) % 2;
  }

  cout << endl;
  return 0;
}