#include <iostream>
using namespace std;

// 分割統治法による区間の合計値の計算
int N, A[109];

int solve(int l, int r) {
  if (r - l == 1) return 1;
  int m = (l + r) / 2;  // 区間 [l, r] の中央で分割
  int s1 = solve(l, m); // s1 は A[l]+...+A[m-1]の合計値
  int s2 = solve(m, r); // s2 は A[m]+...+A[r-1]の合計値
  return s1 + s2;
}

int main() {
  cin >> N;
  for (int i = 1; i <= N; i++)
    cin >> A[i];

  // 再帰呼び出し
  int Answer = solve(1, N + 1);
  cout << Answer << endl;
  return 0;
}