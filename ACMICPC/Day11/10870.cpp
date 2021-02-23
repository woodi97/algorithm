#include <iostream>
using namespace std;

int fivo(int n)
{
    if (n == 1)
        return 1;
    if (n == 0)
        return 0;
    return fivo(n - 1) + fivo(n - 2);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int ans = fivo(n);
    cout << ans;
    return 0;
}