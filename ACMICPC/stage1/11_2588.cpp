#include <iostream>

using namespace std;

int main(void)
{
    int a = 0, b = 0, c = 0;
    cin >> a >> b;
    c = a * b;
    for (int i = 0; i < 3; i++)
    {
        cout << a * (b % 10) << endl;
        b = b / 10;
    }
    cout << c;
    return 0;
}