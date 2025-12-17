#include <iostream>
using namespace std;

// 最大公約数を求める処理（効率的でない-> 2 x min(A, B)回の計算が必要
long long GCD(long long A, long long B) {
  long long Anser = 0;
  for (long long i = 1; i <= min(A, B); i++) {
    if (A % i == 0 && B % i == 0) Anser = i;
  }
  return Anser;
}