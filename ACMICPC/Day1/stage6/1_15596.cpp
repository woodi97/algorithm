#include <iostream>
#include <vector>
using namespace std;
long long sum(vector<int> &a)
{
    long long sum = 0;
    for (unsigned long i = 0; i < a.size(); i++)
        sum += a[i];
    return sum;
};
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;
    cout.precision(3);
    int input = 0;
    vector<int> v;
    while (cin >> input)
        v.push_back(input);
    cout << sum(v);
    return 0;
}