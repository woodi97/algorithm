#include <iostream>
using namespace std;
int main(void)
{
    int tc = 0;
    int a = 0, b = 0;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        cin >> a >> b;
        cout << a + b << endl;
        a = 0, b = 0;
    }
    return 0;
}