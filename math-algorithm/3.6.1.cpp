#include <algorithm>
#include <iostream>
using namespace std;

int N, A[200009];

int main() {
  // 入力
  cin >> N;
  for (int i = 1; i <= N; i++) {
    cin >> A[i];
  }

  // ソート
  // sort関数により、配列の中身が書き換えられる
  sort(A + 1, A + N + 1);

  // 出力
  for (int i = 1; i <= N; i++) {
    cout << A[i] << endl;
  }
  return 0;
}