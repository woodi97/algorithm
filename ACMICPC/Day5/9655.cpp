#include <iostream>
#include <string>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int sum = 0;
    while (n > 3) {
        n -= 3;
        sum++;
    }
    while (n > 0) {
        n -= 1;
        sum++;
    }
    if (sum % 2 == 1) {
        cout << "SK";
        return 0;
    }
    if (sum % 2 == 0) {
        cout << "CY";
        return 0;
    }
}