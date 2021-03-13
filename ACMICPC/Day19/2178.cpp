#include <iostream>
#include <queue>
using namespace std;

typedef struct coordinate
{
    int x;
    int y;
} coordinate;
int maze[101][101];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
queue<coordinate> bq;

void bfs(int N, int M)
{
    coordinate init;
    init.x = 1;
    init.y = 1;
    bq.push(init);
    while (!bq.empty())
    {
        init = bq.front();
        bq.pop();
        for (int i = 0; i < 4; i++)
        {
            int nextx = init.x + dx[i];
            int nexty = init.y + dy[i];
            if (nextx > 0 && nexty > 0 && nextx <= N && nexty <= M && maze[nextx][nexty] == 1)
            {
                maze[nextx][nexty] = maze[init.x][init.y] + 1;
                coordinate temp;
                temp.x = nextx;
                temp.y = nexty;
                bq.push(temp);
            }
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char input;
    int N, M;
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            cin >> input;
            maze[i][j] = (int)input - 48;
        }
    }

    bfs(N, M);
    cout << maze[N][M];

    return 0;
}