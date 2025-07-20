#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int N, A[109];
  bool Answer = false;
  cin >> N;
  for (int i = 1; i <= N; i++) cin >> A[i];

  for (int i = 1; i <= N; i++){
    for (int j = i+1; j <= N; j++) {
      for (int k = j+1; k <= N; k++) {
        if ((A[i] + A[j] + A[k]) == 1000) Answer = true;
      }
    }
  }

  if (Answer == true) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}