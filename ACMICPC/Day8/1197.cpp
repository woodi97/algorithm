#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int line[10001];

typedef struct node {
    int a;
    int b;
    int c;
} node;

bool compare(const node& n1, const node& n2) {
    if (n1.c < n2.c) return true;
    return false;
}

int Find(int x) {
    if (x == line[x])
        return x;
    else
        return line[x] = Find(line[x]);
}

void Union(int x, int y) {
    int xParents = Find(x);
    int yParents = Find(y);
    line[xParents] = yParents;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int v, e;
    cin >> v >> e;
    vector<node> vn;
    for (int i = 1; i <= v; i++) line[i] = i;
    for (int i = 0; i < e; i++) {
        node n;
        cin >> n.a >> n.b >> n.c;
        vn.push_back(n);
    }
    // 가중치에 따라 오름차순 정렬
    sort(vn.begin(), vn.end(), compare);

    //계산
    int ans = 0, count = 0;
    for (int i = 0; i < e; i++) {
        int a = vn[i].a;
        int b = vn[i].b;
        int c = vn[i].c;
        if (Find(a) == Find(b)) continue;
        Union(a, b);
        ans += c;
        count++;
        if (count == v - 1) break;
    }
    cout << ans;

    return 0;
}