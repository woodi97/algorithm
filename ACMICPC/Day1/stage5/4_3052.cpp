#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int input = 0;
    int total_input = 0;
    int print = 0;
    int arr[42] = {
        0,
    };
    while (cin >> input)
    {
        int tmp = input % 42;
        arr[tmp]++;
    }
    for (int i = 0; i < 42; i++)
    {
        if (arr[i] != 0)
            print++;
    }
    cout << print;

    return 0;
}