#include <iostream>
#include <utility>
#include <vector>
using namespace std;

vector<int> g[100001];
int query[100001];
int dp[100001];

int dfs(int u) {
  if (dp[u]) return 0;
  int &ret = dp[u] = 1;
  for (int v : g[u]) {
    ret += dfs(v);
  }
  return ret;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, R, Q;
  cin >> N >> R >> Q;
  for (int i = 0; i < N - 1; i++) {
    int u, v;
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  for (int i = 1; i <= Q; i++) cin >> query[i];
  dfs(R);
  for (int i = 1; i <= Q; i++) cout << dp[query[i]] << "\n";

  return 0;
}