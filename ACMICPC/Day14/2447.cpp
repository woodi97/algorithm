#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int i, j, k;
char DRAW[6562][6562];

void init()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
};

void input(int &n)
{
    cin >> n;
};

void initDraw(int n)
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            DRAW[i][j] = '*';
}

void render(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            cout << DRAW[i][j];
        cout << "\n";
    }
};

void solution(int n)
{
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){

        }
    }
};

int main(void)
{
    int n;
    init();
    input(n);
    initDraw(n);
    solution(n);
    render(n);
    return 0;
}