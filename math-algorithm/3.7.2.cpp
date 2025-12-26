// 階段の上り方がいくつあるかを動的計画法で求める
#include <iostream>
using namespace std;

int N, dp[54];

int main() {

  cin >> N;

  // 動的計画法
  for (int i = 0; i <= N; i++) {
    if (i <= 1)
      dp[i] = 1;
    else
      dp[i] = dp[i - 1] + dp[i - 2];
  }
  cout << dp[N] << endl;
  return 0;
}