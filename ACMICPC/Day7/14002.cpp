#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    int stack = 0;
    int max, max_idx;
    int i, j, k;
    cin >> n;
    vector<vector<int>> a(n + 1, vector<int>(2, 1));
    //입력
    for (i = 1; i <= n; i++) {
        int j = 1;
        cin >> a[i][j];
    }
    //계산
    for (i = n - 1; i > 0; i--) {
        max = 1;
        max_idx = i;
        for (j = i; j <= n; j++) {
            if (a[i][1] < a[j][1]) {
                if (max < a[j][0] + 1) {
                    max = a[j][0] + 1;
                    max_idx = j;
                }
            }
        }
        if (max_idx != i) {
            // 현재 idx에서 길이가 최대가 되는 행의 값들을 넣어주기
            for (k = 1; k < a[max_idx].size(); k++) {
                a[i].push_back(a[max_idx][k]);
            }
        }
        a[i][0] = max;
    }
    //길이가 최대인 행의 idx구하기
    int idx = 1;
    for (i = 1; i <= n; i++) {
        if (a[idx][0] < a[i][0]) {
            idx = i;
        }
    }
    // 출력
    cout << a[idx][0] << "\n";
    for (i = 1; i < a[idx].size(); i++) {
        cout << a[idx][i] << " ";
    }
    return 0;
}