#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int colored[20001];
vector<vector<int>> g;

bool dfs(int u, int c)
{
    if (colored[u] != -1)
        return true;
    colored[u] = c;
    int ans = true;
    for (int v : g[u])
    {
        if (colored[u] == colored[v])
            return false;
        ans &= dfs(v, !c);
    }
    return ans;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc, numOfVertices, numOfEdges;
    cin >> tc;

    for (int i = 0; i < tc; i++)
    {
        cin >> numOfVertices >> numOfEdges;
        g.assign(numOfVertices + 1, vector<int>());
        for (int j = 0; j < numOfEdges; j++)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        memset(colored, -1, sizeof(colored));
        bool ans = true;
        for (int j = 0; j < numOfVertices; j++)
            ans &= dfs(j, 1);
        cout << (ans ? "YES" : "NO") << "\n";
    }
    return 0;
}