#include <iostream>
#include <string>
using namespace std;
#define SIZE 26
int upper[SIZE] = {0};
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int i;
    int answer = 0;
    bool isDup = false;
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s;
    cin >> s;
    //대,소문자 상관없이 같은 문자 upper배열에 갯수 넣기
    for (i = 0; i < s.length(); i++) {
        if (s[i] >= 65 && s[i] <= 90)
            upper[s[i] - 65]++;
        else
            upper[s[i] - 97]++;
    }
    //구하기
    for (i = 1; i < SIZE; i++) {
        if (upper[answer] < upper[i]) {
            answer = i;
            isDup = false;
        } else if (upper[answer] == upper[i])
            isDup = true;
    };
    if (isDup)
        cout << "?";
    else
        cout << alphabet[answer];
}