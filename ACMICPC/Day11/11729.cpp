#include <iostream>
using namespace std;

void hanoi(int n, int from, int to, int by)
{
    if (n == 1)
        cout << from << " " << to << "\n";
    else
    {
        hanoi(n - 1, from, by, to);
        cout << from << " " << to << "\n";
        hanoi(n - 1, by, to, from);
    }
}

int hanoiCount(int n)
{
    int cnt = 1;
    for (int i = 1; i < n; i++)
        cnt = cnt * 2 + 1;
    return cnt;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cout << hanoiCount(n) << "\n";
    hanoi(n, 1, 3, 2);
    return 0;
}