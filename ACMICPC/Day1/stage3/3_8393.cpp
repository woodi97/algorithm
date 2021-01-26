#include <iostream>
using namespace std;
int main(void)
{
    int a = 0, b = 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        b += i + 1;
    }
    cout << b;
    return 0;
}