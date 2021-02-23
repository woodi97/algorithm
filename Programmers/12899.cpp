#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<queue<int> > vq;

void init()
{
    vq.push_back(queue<int>());
    vq.push_back(queue<int>());
    vq.push_back(queue<int>());
    vq[0].push(1);
    vq[1].push(2);
    vq[2].push(4);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    init();

    

    return 0;
}