// 最大公約数の計算（高速: O(log(A+B))）
long long GCD(long long A, long long B) {
  while (A >= 1 && B >= 1) {
    if (A < B)
      B = B % A; // A < Bの場合、大きい方 B を置き換える
    else
      A = A % B; // A => Bの場合、大きい方 A を置き換える
  }
  if (A >= 1) return A;
  return B;
}