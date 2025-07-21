#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  int AB = A + B;
  int CD = C + D;

  if (AB == CD) {
    cout << "Balanced" << endl;
  } else if (AB > CD) {
    cout << "Left" << endl;
  } else {
    cout << "Right" << endl;
  }
  return 0;
}