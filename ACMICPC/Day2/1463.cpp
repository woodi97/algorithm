#include <iostream>
#include <queue>
using namespace std;
void minCal(int input, int depth);
int dp[1000001] = {
    0,
};
int depth = 0;
int result = 0;
queue<pair<int, int>> q;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int input;
    cin >> input;
    minCal(input, 0);
    cout << result;
    return 0;
}

void minCal(int input, int depth)
{
    q.push(pair<int, int>(input, depth));
    while (!q.empty())
    {
        if (input == 1)
        {
            //BFS여서 가장 먼저 1이 나오면 그게 result
            result = q.front().second;
            break;
        }
        else
        {
            //개별로 다 돌아야 BFS 저장가능
            if (!dp[input - 1])
            {
                q.push(pair<int, int>(input - 1, depth + 1));
            }
            if (!dp[input / 2] && input % 2 == 0)
            {
                q.push(pair<int, int>(input / 2, depth + 1));
            }
            if (!dp[input / 3] && input % 3 == 0)
            {
                q.push(pair<int, int>(input / 3, depth + 1));
            }
            //다음 노드로 이동
            q.pop();
            input = q.front().first;
            depth = q.front().second;
            dp[input] = true;
        }
    }
}