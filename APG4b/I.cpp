#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int p;
  cin >> p;

  if (p == 1) {
    int price, N;
    cin >> price >> N;

    cout << N * price << endl;
  } else if (p == 2) {
    int price, N;
    string text;
    cin >> text >> price >> N;

    cout << text + "!" << endl;
    cout << N * price << endl;
  }
  return 0;
}