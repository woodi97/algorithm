#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 0;
    int input = 0;
    cin >> tc;
    int *arr = new int[tc];
    for (int i = 0; i < tc; i++)
    {
        cin >> input;
        arr[i] = input;
    }
    int max = arr[0], min = arr[1];
    for (int i = 0; i < tc; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << min << ' ' << max;
    delete[] arr;
    return 0;
}