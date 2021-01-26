#include <iostream>
using namespace std;
int cycle(int num)
{
    int a = 1, b = 0;
    a = num;
    b = (a / 10) + (a % 10);
    a = ((a % 10) * 10) + (b % 10);
    return a;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int origin, temp, length = 0;
    cin >> origin;
    temp = origin;
    while (true)
    {
        temp = cycle(temp);
        length++;
        if (temp == origin)
            break;
    }
    cout << length;
    return 0;
}