#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void input_setting();
int input();
int solution(int len);
int seq[1001] = {0};
int dp[1001];

int main(void) {
    input_setting();
    int length = input();
    int ans = solution(length);
    cout << ans;
}
void input_setting() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // cout << fixed;
    // cout.precision(3);
}
int input() {
    int length;
    cin >> length;
    fill_n(dp, 1001, 1);
    //앞으로는 index 1부터 저장
    for (int i = 1; i <= length; i++) cin >> seq[i];
    return length;
}
int solution(int len) {
    for (int i = len; i > 0; i--) {
        for (int j = i; j < len; j++) {
            if (seq[i] < seq[j + 1]) {
                if (dp[i] < dp[j + 1] + 1) dp[i] = dp[j + 1] + 1;
            }
        }
    }
    return *max_element(dp + 1, dp + len);
}