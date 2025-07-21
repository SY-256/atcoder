#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;

  int a = N / 1000;
  int b = N % 1000 / 100;
  int c = N % 100 / 10;
  int d = N % 10;

  if (a == b && b == c) {
    cout << "Yes" << endl;
  } else if (b == c && c == d) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}