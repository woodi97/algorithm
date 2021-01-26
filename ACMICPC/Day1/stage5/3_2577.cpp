#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    int result = a * b * c;
    int nums[10] = {
        0,
    };
    while (result != 0)
    {
        int temp = result % 10;
        nums[temp]++;
        result = result / 10;
    }
    for (int i = 0; i < 10; i++)
        cout << nums[i] << '\n';

    return 0;
}
