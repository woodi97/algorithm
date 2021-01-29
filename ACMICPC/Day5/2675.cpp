#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int i, j, tc, repeat;
    string s;
    cin >> tc;
    for (i = 0; i < tc; i++) {
        cin >> repeat;
        cin >> s;
        for (j = 0; j < repeat * s.length(); j++) {
            cout << s[j / repeat];
        }
        cout << "\n";
    }
    return 0;
}