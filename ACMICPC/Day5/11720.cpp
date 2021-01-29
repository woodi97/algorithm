#include <iostream>
using namespace std;
char input[101] = {0};
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int length, sum = 0;
    cin >> length;
    for (int i = 1; i <= length; i++) cin >> input[i];
    for (int i = 1; i <= length; i++) sum += input[i] - 48;
    cout << sum;
    return 0;
}