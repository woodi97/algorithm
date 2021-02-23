#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int card[101];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int i, j, k;
    int N, M;
    cin >> N >> M;

    for (i = 0; i < N; i++)
        cin >> card[i];

    int ans = 3;

    for (k = 0; k < N - 2; k++)
    {
        for (i = k + 1; i < N - 1; i++)
        {
            for (j = i + 1; j < N; j++)
            {
                int temp = card[k] + card[i] + card[j];
                if (temp <= M && temp - ans > 0)
                    ans = temp;
            }
        }
    }

    cout << ans << "\n";

    return 0;
}