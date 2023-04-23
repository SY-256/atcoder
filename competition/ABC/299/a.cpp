#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int N;
  string S;
  cin >> N >> S;

  string ans = "out";

  // find
  if (S.find("|") < S.find("*") && S.find("*") < S.rfind("|")) { ans = "in"; }

  cout << ans << endl;
  return 0;
}