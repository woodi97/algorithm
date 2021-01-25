#include <iostream>
using namespace std;
int main(void)
{
    int a = 0;
    cin >> a;
    for (int i = 1; i < 10; i++)
        printf("%d * %d = %d\n", a, i, a * i);
    return 0;
}