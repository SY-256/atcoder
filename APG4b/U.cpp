#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

void saiten(vector<vector<int>> &data, int &ccorrect_count, int &wrong_count) {
  for (int i = 0; i < 9; ++i) {
    for (int j = 0; j < 9; ++j) {
      if (data.at(i).at(j) == (i + 1) * (j + 1))
        ++ccorrect_count;
      else {
        ++wrong_count;
        data.at(i).at(j) = (i + 1) * (j + 1);
      }
    }
  }
}

int main() {
  vector<vector<int>> data(9, vector<int>(9));
  for (int i = 0; i < 9; ++i) {
    for (int j = 0; j < 9; ++j) {
      cin >> data.at(i).at(j);
    }
  }

  int correct_count = 0;
  int wrong_count = 0;

  saiten(data, correct_count, wrong_count);

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cout << data.at(i).at(j);
      if (j < 8)
        cout << " ";
      else
        cout << endl;
    }
  }
  cout << correct_count << endl;
  cout << wrong_count << endl;

  return 0;
}