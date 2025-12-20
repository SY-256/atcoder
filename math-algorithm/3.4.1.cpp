#include <iostream>
using namespace std;

//  賞金の期待値を求める問題（期待値の線形性）
int N, B[100009], R[10009];

int main() {
  // 入力
  cin >> N;
  for (int i = 1; i <= N; i++)
    cin >> B[i];
  for (int i = 1; i <= N; i++)
    cin >> R[i];

  // 答えの計算 -> 答えの出力
  double Blue = 0.0, Red = 0.0;
  for (int i = 1; i <= N; i++) {
    Blue += 1.0 * B[i] / N;
    Red += 1.0 * R[i] / N;
  }
  printf("%.12lf\n", Blue + Red);
  return 0;
}