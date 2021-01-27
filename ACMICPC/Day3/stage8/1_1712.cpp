#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void input_setting();
void input();
int solution();
double a, b, c;
int result;

int main(void) {
    input_setting();
    input();
    int ans = solution();
    cout << ans;
}

void input_setting() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // cout << fixed;
    // cout.precision(3);
}

void input() { cin >> a >> b >> c; }
int solution() {
    int i = a / (c - b);
    if (i < 0) {
        return -1;
    } else {
        return i + 1;
    }
    return i;
}