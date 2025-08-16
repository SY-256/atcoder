#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  string S;
  cin >> S;

  if (S == "red")
    cout << "SSS" << endl;
  else if (S == "blue")
    cout << "FFF" << endl;
  else if (S == "green")
    cout << "MMM" << endl;
  else
    cout << "Unknown" << endl;

  return 0;
}