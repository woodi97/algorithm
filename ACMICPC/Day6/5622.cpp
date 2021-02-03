#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    string A;
    cin >> A;
    for (int i = 0; i < A.length(); i++) {
        int a = (int)A[i] - 65;
        if (a < 15)
            sum += a / 3 + 2;
        else if (a >= 15 && a <= 18)
            sum += 7;
        else if (a >= 19 && a <= 21)
            sum += 8;
        else
            sum += 9;
    }
    cout << sum + A.length();
    return 0;
}