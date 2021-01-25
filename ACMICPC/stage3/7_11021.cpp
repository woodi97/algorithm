#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 0, a = 0, b = 0;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        cin >> a >> b;
        cout << "Case #" << i << ": " << a + b << '\n';
        a = 0;
        b = 0;
    }
    return 0;
}