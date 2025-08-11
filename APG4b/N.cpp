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
  vector<int> A(N);

  int avg = 0;
  for (int i = 0; i < N; ++i) {
    cin >> A.at(i);
    avg += A.at(i);
  }

  avg /= N;
  for (int i = 0; i < A.size(); ++i) {
    cout << abs(A.at(i) - avg) << endl;
  }

  return 0;
}