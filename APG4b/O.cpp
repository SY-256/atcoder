#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int max_num = max(C, max(A, B));
  int min_num = min(C, min(A, B));
  int ans = max_num - min_num;

  cout << ans << endl;
  return 0;
}