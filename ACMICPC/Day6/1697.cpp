#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;
int search_bfs(int me, int bro);
int cache[100001] = {0};
queue<pair<int, int>> q;

int main() {
    int me, bro;
    cin >> me >> bro;
    q.push(make_pair(me, 0));
    int result = search_bfs(me, bro);
    cout << result;
    return 0;
}

int search_bfs(int me, int bro) {
    int now, depth = 0;
    while (!q.empty()) {
        now = q.front().first;
        depth = q.front().second;
        q.pop();
        //이미 해당 cache에 있다면 그 값이 최소값이다. BFS라
        if (!cache[now]) cache[now] = depth;
        // 그러다가 now와 bro의 값이 같다면 return
        if (now == bro) return cache[now];
        //해당 범위에 있으며 cache에 존재하지 않을때만 큐에 넣는다. cache에
        //존재하면 이미 앞 큐에 같은 숫자로 bfs가 돌아가고 있다는 의미
        if (now - 1 >= 0 && !cache[now - 1]) {
            q.push(make_pair(now - 1, depth + 1));
        }
        if (now + 1 < 100001 && !cache[now + 1]) {
            q.push(make_pair(now + 1, depth + 1));
        }
        if (now * 2 < 100001 && !cache[now * 2]) {
            q.push(make_pair(now * 2, depth + 1));
        }
    }
}