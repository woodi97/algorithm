#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    // first weight, second value
    vector<pair<int, int>> goods(n + 1, make_pair(0, 0));

    for (int i = 1; i <= n; i++) {
        int w, v;
        cin >> w >> v;
        goods[i].first = w;
        goods[i].second = v;
    }

    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= k; j++) {
            if (goods[i].first > j) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = max(dp[i - 1][j],
                               dp[i - 1][j - goods[i].first] + goods[i].second);
            }
        }
    cout << dp[n][k];

    return 0;
}