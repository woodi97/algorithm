#include <cstring>
#include <iostream>
#include <string>
#define SIZE 26
using namespace std;
int arr[SIZE];

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int i;
    string s;
    memset(arr, -1, SIZE * sizeof(int));
    cin >> s;
    int len = s.length();
    for (i = 0; i < len; i++) {
        int temp = s[i] - 97;
        if (arr[temp] != -1) continue;
        arr[temp] = i;
    }
    for (i = 0; i < SIZE; i++) {
        if (arr[i] != -1)
            cout << arr[i] << " ";
        else
            cout << -1 << " ";
    }
    return 0;
}