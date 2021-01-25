#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 0;
    int x = 0;
    int input = 0;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        cin >> input;
        if (input < x)
            cout << input << ' ';
    }
    return 0;
}