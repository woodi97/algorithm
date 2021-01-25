#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 0;
    int input = 0;
    double sum = 0;
    cin >> tc;
    vector<int> v;
    for (int i = 0; i < tc; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    int max = *max_element(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        sum = sum + v[i];
    cout << fixed;
    cout.precision(6);
    cout << sum / max * 100 / v.size();
    return 0;
}