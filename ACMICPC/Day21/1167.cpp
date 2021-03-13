// 5
// 1 3 2 -1
// 2 4 4 -1
// 3 1 2 4 3 -1
// 4 2 4 3 3 5 6 -1
// 5 4 6 -1

#include <iostream>
#include <utility>
#include <set>
#include <string.h>
#include <algorithm>

using namespace std;
typedef pair<int, int> pii;

set<pii> g[100001];
int isChecked[100001];
int dist[100001];

void dfs(int u)
{
    if (isChecked[u])
        return;
    isChecked[u] = 1;
    for (pii v : g[u]) {
        if(!isChecked[v.first]) {
            dist[v.first] = dist[u] + v.second;
            dfs(v.first);
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int numOfVertices;
    cin >> numOfVertices;
    //input
    for (int i = 0; i < numOfVertices; i++)
    {
        int u, v, c;
        cin >> u;
        while (1)
        {
            cin >> v;
            if (v == -1)
                break;
            cin >> c;
            g[u].insert(pii(v, c));
        }
    }
    //calc
    dfs(1);
    int maxVertex = 1, maxDist = 0;
    for(int i = 1;i <= numOfVertices;++i) {
        if(maxDist < dist[i]) {
            maxDist = dist[i];
            maxVertex = i;
        }
    }
    memset((void *)isChecked, 0, sizeof(isChecked));
    memset((void *)dist, 0, sizeof(dist));
    dfs(maxVertex);
    cout << *max_element(dist, dist + numOfVertices);

    return 0;
}