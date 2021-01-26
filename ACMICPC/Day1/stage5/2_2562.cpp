#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int input = 0;
    int max = 0;
    vector<int> v;
    while (cin >> input)
        v.push_back(input);
    for (int i = 0; i < v.size(); i++)
    {
        if (v[max] < v[i])
            max = i;
    }
    cout << v[max] << '\n'
         << max + 1;
    return 0;
}
