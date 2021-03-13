#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int i;
    unsigned long long price[100001];
    unsigned long long dist[100001];

    int n;
    cin >> n;
    for (i = 0; i < n - 1; i++)
        cin >> dist[i];

    int min_price;
    cin >> min_price;
    price[0] = min_price;
    for (i = 1; i < n; i++)
    {
        cin >> price[i];
        if (min_price > price[i])
            min_price = price[i];
        else
            price[i] = min_price;
    }

    unsigned long long ans = 0;
    for (i = 0; i < n - 1; i++)
        ans += price[i] * dist[i];
    cout << ans;

    return 0;
}