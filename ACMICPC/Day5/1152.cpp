#include <iostream>
#include <string>
using namespace std;
#define SIZE 26
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int count = 1;
    string s;
    getline(cin, s);
    if (s.empty()) {
        cout << "0";
        return 0;
    }
    for (int i = 0; i < s.length(); i++) {
        if ((int)s[i] == 32) count++;
    }
    if ((int)s[0] == 32) count--;
    if ((int)s[s.length() - 1] == 32) count--;
    cout << count;
    return 0;
}