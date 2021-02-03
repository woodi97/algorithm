#include <iostream>
#include <vector>
using namespace std;
vector<int> coin;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    int input;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> input;
        coin.push_back(input);
    }
    int cnt = 0;
    for (int i = coin.size() - 1; i >= 0; i--) {
        if (k / coin[i] == 0) continue;
        cnt += k / coin[i];
        k = k % coin[i];
    }
    cout << cnt;

    return 0;
}