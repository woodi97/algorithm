#include <iostream>
#include <vector>
#include <utility>
using namespace std;

// r/c D C B A
//  A
//  B
//  C
//  D

vector<vector<int> > vv;
vector<pair<int, int> > vp;

void input(int N)
{
    int a, b;
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        vp.push_back(make_pair(a, b));
    }
}

void init(int N)
{
    for (int i = N; i > 0; i--)
    {
        vector<int> v(N - 1, 0);
        vv.push_back(v);
    }
}

void solution(int N)
{
    // 대각선으로 탐색
    for (int i = N - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            // axis (j,i-j-1)
            int row = j;
            int column = i - j - 1;
            // 비교해야하는 횟수
            int repeat = N - row - column;
            vv[row][column] = 2147483647;
            for (int k = 1; k < repeat; k++)
            {
                int sum = vv[row][column + k] + vv[row + repeat - k][column] + vp[row].first * vp[N - (column + k + 1)].second * vp[N - (column + 1)].second;
                vv[row][column] = min(vv[row][column], sum);
            }
        }
    }
}

void print(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i; j++)
            cout << vv[i][j] << " ";
        cout << "\n";
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    input(N);
    init(N);
    solution(N);
    print(N);
    cout << vv[0][0];

    return 0;
}