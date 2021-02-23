#include <iostream>
using namespace std;

int cache[1001][11];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    cache[0][0] = 10;
    for (int i = 1; i < 10; i++)
        cache[0][i] = 1;

    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        cache[i][1] = cache[i - 1][0];
        sum += cache[i][1];
        for (int j = 2; j < 11; j++)
        {
            cache[i][j] = cache[i][j - 1] - cache[i - 1][j - 1];
            if (cache[i][j] < 0)
                cache[i][j] += 10007;
            sum += cache[i][j];
        }
        cache[i][0] = sum % 10007;
        sum = 0;
    }

    cout << cache[n - 1][0] << "\n";

    return 0;
}