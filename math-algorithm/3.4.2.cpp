#include <iostream>
using namespace std;

// 点数の期待値を求める問題
int N, P[109], Q[59];
double Answer = 0.0;

int main() {
  // 入力
  cin >> N;
  for (int i = 1; i <= N; i++)
    cin >> P[i] >> Q[i];

  // 答えの計算
  for (int i = 1; i <= N; i++) {
    Answer += 1.0 * Q[i] / P[i];
  }
  printf("%.12lf\n", Answer);
  return 0;
}