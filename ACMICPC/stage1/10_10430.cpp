#include <iostream>

using namespace std;

int main(void)
{
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    printf("%d\n%d\n%d\n%d", (a + b) % c, ((a % c) + (b % c)) % c, (a * b) % c, ((a % c) * (b % c)) % c);
    return 0;
}
