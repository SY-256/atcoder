#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int A, B;
  string op;
  cin >> A >> op >> B;

  if (op == "+") {
    cout << A + B << endl;
  } else if (op == "-") {
    cout << A - B << endl;
  } else if (op == "*") {
    cout << A * B << endl;
  } else if (op == "/") {
    if (B == 0) {
      cout << "error" << endl;
    } else {
      cout << A / B << endl;
    }
  } else {
    cout << "error" << endl;
  }
  return 0;
}