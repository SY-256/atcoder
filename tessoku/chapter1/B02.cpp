#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int A, B;
  bool Answer = false;
  cin >> A >> B;

  for (int i = 1; i <= (B - A); i++) {
    int N = A + i;
    if (100 % N == 0) Answer = true;
  }
  
  if (Answer == true) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}