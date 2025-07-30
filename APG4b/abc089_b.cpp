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

  set<string> uniqueChars;

  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    uniqueChars.insert(s);
  }

  if (uniqueChars.size() == 4) {
    cout << "Four" << endl;
  } else {
    cout << "Three" << endl;
  }

  return 0;
}