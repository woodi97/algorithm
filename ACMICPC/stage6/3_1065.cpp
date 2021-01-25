#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int input;
    int count = 99;
    int k1, k2, k3;
    cin >> input;
    if (input < 100)
    {
        cout << input;
        return 0;
    }
    for (int i = 110; i <= input; i++)
    {
        k1 = i / 100;
        k2 = i / 10 - k1 * 10;
        k3 = i % 10;
        if (k1 - k2 == k2 - k3)
            count++;
    }
    cout << count;
    return 0;
}