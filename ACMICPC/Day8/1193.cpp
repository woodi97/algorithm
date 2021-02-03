#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int input, n;
    cin >> input;
    for (int i = 1; i < 10000000; i++) {
        if (input == 1) {
            n = 1;
            break;
        }
        if (i * (i + 1) >= input * 2) {
            n = i;
            break;
        }
    }
    int total = n + 1;
    int gap = (n * (n + 1)) / 2 - input;
    if (total % 2 == 1) {
        //오름
        cout << total - 1 - gap << "/" << 1 + gap;

    } else {
        //역
        cout << 1 + gap << "/" << total - 1 - gap;
    }

    return 0;
}