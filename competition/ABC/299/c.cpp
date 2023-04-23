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
  int ans = -1;
  for (int i = 0; i < N; i++) {
    if (S.substr(i, 1) == "o") {
      int j = i + 1;
      int temp_ans = 0;
      for (j; j < N; j++) {
        temp_ans += 1;
        if (S.substr(j, 1) == "-") { break; }
      }
      if (temp_ans > ans) { ans = temp_ans; }
      i = j;
    }
  }
  cout << ans << endl;
  return 0;
}