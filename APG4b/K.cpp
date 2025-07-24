#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int A, B;
  cin >> A >> B;

  int i = 1;
  int j = 1;
  string ans_A = "A:";
  string ans_B = "B:";

  while (i <= A) {
    ans_A += "]";
    i++;
  };
  cout << ans_A << endl;

  while (j <= B) {
    ans_B += "]";
    j++;
  };
  cout << ans_B << endl;

  return 0;
}