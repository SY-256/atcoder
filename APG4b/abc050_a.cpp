#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int A, B;
  char op;
  cin >> A >> op >> B;

  int ans = 0;
  if (op == '+') {
    ans = A + B;
  } else if (op == '-') {
    ans = A - B;
  }

  cout << ans << endl;
  return 0;
}