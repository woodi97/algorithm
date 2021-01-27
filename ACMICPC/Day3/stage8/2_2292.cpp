#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int input, i = 0;
    int acum = 1;
    cin >> input;
    for (int sum = 2; sum <= input; i++) sum += 6 * i;
    if (input == 1) i = 1;
    cout << i;
    return 0;
}