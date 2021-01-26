#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;
    cout.precision(3);

    int tc;
    int stn;
    int score;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        int sum = 0;
        vector<int> v;
        int count = 0;
        double percent = 0;
        cin >> stn;
        for (int j = 0; j < stn; j++)
        {
            cin >> score;
            v.push_back(score);
        }
        for (int j = 0; j < v.size(); j++)
            sum += v[j];
        double avg = sum / v.size();
        for (int j = 0; j < v.size(); j++)
        {
            if (v[j] > avg)
                count++;
        }
        cout << (count / (double)v.size()) * 100 << '%' << '\n';
    }
    return 0;
}