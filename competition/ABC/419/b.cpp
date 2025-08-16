#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int Q;
  cin >> Q;
  vector<int> data(Q, 10000);

  for (int i = 0; i < Q; ++i) {
    int q;
    cin >> q;

    if (q == 1) {
      int x;
      cin >> x;
      data.push_back(x);
    } else {
      int min = *min_element(data.begin(), data.end());
      auto it = find(data.begin(), data.end(), min);
      if (it != data.end()) { data.erase(it); }
      cout << min << endl;
    }
  }

  return 0;
}