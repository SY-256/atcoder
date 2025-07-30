#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int N, A;
  cin >> N >> A;

  int ans = A;
  for (int i = 1; i <= N; i++) {
    string op;
    int B;
    cin >> op >> B;
    if (op == "+") {
      ans += B;
    } else if (op == "-") {
      ans -= B;
    } else if (op == "*") {
      ans *= B;
    } else if (op == "/" && B != 0) {
      ans /= B;
    } else {
      cout << "error" << endl;
      break;
    }

    cout << i << ":" << ans << endl;
  }
  return 0;
}