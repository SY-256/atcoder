#include <algorithm>
#include <iostream>
using namespace std;

long long GCD(long long A, long long B) {
  while (A >= 1 && B >= 1) {
    if (A < B)
      B = B % A;
    else
      A = A % B;
  }
  if (A >= 1) return A;
  return B;
}

long long N;
long long A[100000];

int main() {
  // 入力
  cin >> N;
  for (int i = 1; i <= N; i++)
    cin >> A[i];

  // 答えを求める
  long long R = GCD(A[1], A[2]);
  for (int i = 3; i <= N; i++) {
    R = GCD(R, A[i]);
  }
  // 出力
  cout << R << endl;
  return 0;
}