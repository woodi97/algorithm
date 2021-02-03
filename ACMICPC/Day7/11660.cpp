#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int cache[1025][1025] = {0};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    int i, j, k;
    int stack = 0, input = 0;
    cin >> n >> m;
    for (i = 1; i <= n; i++) {
        cache[i][0] = stack;
        for (j = 1; j <= n; j++) {
            cin >> input;
            stack += input;
            cache[i][j] = stack;
        }
    }
    int x1, y1, x2, y2;
    // x1,y1,x2,y2 입력
    for (k = 0; k < m; k++) {
        int ans = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        for (i = x1; i <= x2; i++) {
            ans += cache[i][y2] - cache[i][y1 - 1];
        }
        cout << ans << "\n";
    }
    return 0;
}