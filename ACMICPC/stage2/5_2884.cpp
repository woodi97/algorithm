#include <iostream>

using namespace std;

int main(void)
{
    int later = 45;
    int a = 0, b = 0;
    cin >> a >> b;

    if ((b - 45) < 0)
    {
        a -= 1;
        b += 15;
    }
    else
    {
        b -= 45;
    }
    if (a == -1)
    {
        a = 23;
    }
    cout << a << " " << b;
    return 0;
}
