#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void input_setting();
int input();
int bigSum(int size);
int arr[1000001] = {
    0,
};

int main(void) {
    input_setting();
    int size = input();
    int result = bigSum(size);
    cout << result << "\n";
}

void input_setting() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // cout << fixed;
    // cout.precision(3);
}

int input() {
    int i, size;
    cin >> size;
    // i=1을 쓴 이유는 index 매칭할때의 편리함을 위해
    for (i = 1; i < size + 1; i++) {
        int seq;
        cin >> seq;
        arr[i] = seq;
    }
    return size;
}

int bigSum(int size) {
    int i, max_idx = size;
    for (i = size; i > 0; i--) {
        //배열의 이전값(이전 배열값들 중 가장 큰 값이 저장되어 있다) + 현재값 이
        //현재값보다 크면
        if (arr[i] < arr[i] + arr[i + 1])
            //현재 배열을 두 값의 합으로 바꾼다
            arr[i] = arr[i] + arr[i + 1];
        if (arr[i] > arr[max_idx]) max_idx = i;
    }
    return arr[max_idx];
}