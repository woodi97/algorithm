#include <iostream>
using namespace std;
int parent[1000002];

int Find(int n)
{
    if (n == parent[n])
        return n;
    else
        return parent[n] = Find(parent[n]);
}

void Union(int a, int b)
{
    a = Find(a);
    b = Find(b);
    if (a != b)
        parent[b] = a;
}

void isUnion(int a, int b)
{
    a = Find(a);
    b = Find(b);
    if (a == b)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i <= n; i++)
        parent[i] = i;

    int digit, a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> digit >> a >> b;

        if (digit == 0)
            Union(a, b);
        else
            isUnion(a, b);
    }

    return 0;
}