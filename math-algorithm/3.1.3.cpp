#include <iostream>
using namespace std;

// 約数をすべて出力
int main() {
  long long N;
  cin >> N;

  for (long long i = 1; i * i <= N; i++) {
    if (N % i != 0) continue;
    cout << i << endl; // iを約数に追加
    if (i != N / i) {
      cout << N / i << endl; // i ≠ N/i のとき、N/iも約数に追加
    }
  }
  return 0;
}