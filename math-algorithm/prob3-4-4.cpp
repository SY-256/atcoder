#include <iostream>
using namespace std;

int N;
double Answer = 0.0;

int main() {
  // 入力
  cin >> N;

  // 期待値を求める
  // N/n + N/(N-1) + N/(N-2) + ... + N/2 + N/1
  for (int i = N; i >= 1; i--) {
    Answer += 1.0 * N / i;
  }
  printf("%.12lf\n", Answer);
  return 0;
}