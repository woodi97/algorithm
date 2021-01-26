#include <iostream>
#include <vector>
using namespace std;
void selfNum()
{
    int i, ans = 0;
    int arr[10001] = {
        0,
    };
    for (i = 1; i <= 10000; i++)
    {
        if (i < 10)
        {
            ans = 2 * i;
            arr[ans] = 1;
        }
        else
        {
            int ans = i;
            int temp = i;
            while (temp > 0)
            {
                ans += (temp % 10);
                temp = temp / 10;
            }
            if (ans <= 10000)
                arr[ans] = 1;
        }
    }
    for (i = 1; i <= 10000; i++)
    {
        if (arr[i] != 1)
            cout << i << "\n";
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;
    selfNum();
    return 0;
}