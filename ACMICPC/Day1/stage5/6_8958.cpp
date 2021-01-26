#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;
    cout.precision(3);
    int tc;
    string str;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        int score = 0;
        int continue_stack = 1;
        cin >> str;
        for (int j = 0; j < str.length(); j++)
        {
            if (str[j] == 'O')
            {
                score = score + continue_stack;
                continue_stack++;
            }
            else
                continue_stack = 1;
        }
        cout << score << '\n';
    }
    return 0;
}