#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct appoint
{
    int start;
    int end;
} appoint;

vector<appoint> v;

bool cmp(appoint first, appoint second)
{
    if (first.end == second.end)
        return first.start < second.start;
    else
        return first.end < second.end;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    appoint temp;

    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp.start >> temp.end;
        v.push_back(temp);
    }

    sort(v.begin(), v.end(), cmp);

    int cnt = 1;
    int checkpoint = v[0].end;
    for (int i = 1; i < N; i++)
    {
        if (checkpoint <= v[i].start)
        {
            cnt++;
            checkpoint = v[i].end;
        }
    }

    cout << cnt;

    return 0;
}