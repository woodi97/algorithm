#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 0;
    int a = 0, b = 0;

    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        cin >> a >> b;
        cout << a + b << '\n';
    }
    return 0;
}