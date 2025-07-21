#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  string text;
  cin >> text;
  char target = '1';
  int count = std::count(text.begin(), text.end(), target);

  cout << count << endl;
  return 0;
}