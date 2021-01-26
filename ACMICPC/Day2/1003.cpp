#include <iostream>
using namespace std;
int fibo(int n);
int tc[82] = {
    0,
};
int zero_one[2] = {0, 0};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;
    cout.precision(3);

    int i, input;
    //have 0,1 per 2 space
    cin >> input;

    for (i = 0; i < input; i++)
    {
        int fn;
        cin >> fn;
        fibo(fn);
        //출력
        cout << zero_one[0] << " " << zero_one[1] << "\n";
        //0,1 갯수 스택 0으로 초기화
        zero_one[0] = 0, zero_one[1] = 0;
    }
    return 0;
}
int fibo(int n)
{
    if (tc[n * 2] || tc[n * 2 + 1])
    {
        //배열에 값이 존재
        zero_one[0] += tc[n * 2];
        zero_one[1] += tc[n * 2 + 1];
        return zero_one[0] + zero_one[1];
        // -> 0,1 배열에 해당 값 축적
    }
    else
    {
        //배열에 값이 존재X
        if (n == 0)
        {
            zero_one[0]++;
            tc[0]++;
            return 0;
        }
        else if (n == 1)
        {
            zero_one[1]++;
            tc[3]++;
            return 1;
        }
        else
        {
            int a = fibo(n - 1) + fibo(n - 2);
            //dp에 저장
            tc[n * 2] = zero_one[0], tc[n * 2 + 1] = zero_one[1];
            return a;
        }
    }
}