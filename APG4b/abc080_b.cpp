#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  string n;
  cin >> n;

  int sum = 0;
  for (char c : n) {
    int digit = c - '0';
    sum += digit;
  }
  int digit_n = stoi(n);
  if (digit_n % sum == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}