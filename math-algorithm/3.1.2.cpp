#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

// 高速な素数判定を行うプログラム
bool isprime(long long N) {
  // Nを2以上の整数とし、Nが素数であればtrue, 素数でなければfalseを返す
  for (long long i = 2; i * i <= N; i++) {
    if (N % i == 0) return false;
  }
  return true;
}