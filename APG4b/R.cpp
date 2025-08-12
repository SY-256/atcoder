#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  vector<int> A(5);
  for (int i = 0; i < (int)A.size(); ++i) {
    cin >> A.at(i);
  }

  string ans = "NO";
  for (int i = 0; i < (int)A.size() - 1; ++i) {
    if (A.at(i) == A.at(i + 1)) ans = "YES";
  }

  cout << ans << endl;
  return 0;
}