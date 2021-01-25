#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 0;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        for (int j = 1; j <= tc; j++)
        {
            if (j >= tc - i + 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}