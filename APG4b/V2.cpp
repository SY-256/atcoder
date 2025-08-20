#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int count_report_num(vector<vector<int>> &children, int x) {
  if (children.at(x).size() == 0) return 1;

  int report_count = 1;
  for (int c : children.at(x)) {

    report_count += count_report_num(children, c);
  }
  return report_count;
}

int main() {
  int N;
  cin >> N;

  vector<int> p(N);
  p.at(0) = -1;
  for (int i = 1; i < N; ++i) {
    cin >> p.at(i);
  }

  // 組織の関係から2次元配列を作成する
  vector<vector<int>> children(N);
  for (int i = 1; i < N; ++i) {
    int parent = p.at(i);
    children.at(parent).push_back(i);
  }

  for (int i = 0; i < N; ++i) {
    cout << count_report_num(children, i) << endl;
  }

  return 0;
}