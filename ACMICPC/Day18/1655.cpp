#include <iostream>
#include <queue>
using namespace std;

priority_queue<int, vector<int>, less<int> > max_pq;
priority_queue<int, vector<int>, greater<int> > min_pq;

void swap()
{
    int temp1 = max_pq.top();
    int temp2 = min_pq.top();
    max_pq.pop();
    min_pq.pop();
    max_pq.push(temp2);
    min_pq.push(temp1);
}

void add_queue(int n)
{
    if (max_pq.size() == 0)
        max_pq.push(n);
    else
    {
        if (max_pq.size() <= min_pq.size())
            max_pq.push(n);
        else
            min_pq.push(n);
        if (max_pq.top() > min_pq.top())
            swap();
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, input;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> input;
        add_queue(input);
        cout << max_pq.top() << "\n";
    }

    return 0;
}