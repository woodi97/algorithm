#include <iostream>
using namespace std;
long long cache[1000001] = {1, 1, 1};
int sol(int n);
int sol2(int n);

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int input;
    cin >> input;
    int ans = sol2(input);
    cout << ans;
    return 0;
}

int sol(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    if (cache[n]) {
        return cache[n];
    } else {
        cache[n - 1] = sol(n - 1);
        cache[n - 2] = sol(n - 2);
        return (cache[n - 1] + cache[n - 2]) % 15746;
    }
}

int sol2(int n) {
    for (int i = 1; i <= n; i++) {
        cache[i] = cache[i] % 15746;
        cache[i - 1] = cache[i - 1] % 15746;
        cache[i + 1] = cache[i] + cache[i - 1];
    }
    return cache[n] % 15746;
}