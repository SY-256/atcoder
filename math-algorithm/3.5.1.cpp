#include <iostream>
using namespace std;

// 円周率πの近似値を出力するプログラム
int main() {
  int N = 10000000;
  int M = 0;
  for (int i = 1; i <= N; i++) {
    double px = rand() / (double)RAND_MAX; // 0以上1以下の乱数を生成
    double py = rand() / (double)RAND_MAX; // 0以上1以下の乱数を生成
    // 原点からの距離はsqrt(px * px + py * py)
    // これが1以下であれば良いので、条件は「px * px + py * py <= 1」
    if (px * px + py * py <= 1) { M += 1; }
  }
  printf("%.12lf\n", 4.0 * M / N);
  return 0;
}