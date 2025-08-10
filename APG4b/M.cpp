#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  string S;
  cin >> S;

  int ans = 1;
  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == '+') {
      ans++;
    } else if (S.at(i) == '-') {
      ans--;
    }
  }
  cout << ans << endl;
  return 0;
}