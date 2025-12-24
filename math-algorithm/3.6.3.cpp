#include <iostream>
using namespace std;

long long func(long long N) {
  if (N == 1) return 1;
  return func(N - 1) * N;
}

int main() {
  long long N;
  cin >> N;
  cout << func(N) << endl;
  return 0;
}