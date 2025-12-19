#include <iostream>
using namespace std;

long long N;
long long A[500009];
long long red = 0, blue = 0, yellow = 0;

int main() {
  cin >> N;
  for (int i = 1; i <= N; i++)
    cin >> A[i];

  for (int i = 1; i <= N; i++) {
    if (A[i] == 1) red += 1;
    if (A[i] == 2) blue += 1;
    if (A[i] == 3) yellow += 1;
  }

  // 出力
  cout << (red * (red - 1)) / 2 + (blue * (blue - 1)) / 2 + (yellow * (yellow - 2)) / 2 << endl;
  return 0;
}