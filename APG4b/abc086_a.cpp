#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int a, b;
  cin >> a >> b;

  int calc = a * b;
  if (calc % 2 == 0) {
    cout << "Even" << endl;
  } else {
    cout << "Odd" << endl;
  }
  return 0;
}