#include <iostream>
using namespace std;

void calculation(string first, string second)
{
    //'0'문자를 char형태의 숫자형문자에서 빼면 1byte면서 정수를 저장할 수 있다
    for (int i = 1; i < first.length(); i++)
        first[i] -= '0';
    for (int i = 1; i < second.length(); i++)
        second[i] -= '0';

    if (first[0] == second[0])
    {
        int gap = first.length() - second.length();
        for (int i = 1; i < second.length(); i++)
            first[gap + i] += second[i];
        for (int i = first.length() - 1; i >= 2; i--)
        {
            if (first[i] >= 10)
            {
                first[i - 1]++;
                first[i] -= 10;
            }
        }
        if (first[1] >= 10)
        {
            first[1] -= 10;
            first.insert(first.begin() + 1, 1);
        }
    }
    else
    {
        if (first[0] == '-')
            for (int i = 1; i < first.length(); i++)
                first[i] *= -1;
        else
            for (int i = 1; i < second.length(); i++)
                second[i] *= -1;
        int gap = first.length() - second.length();
        for (int i = 1; i < second.length(); i++)
            first[gap + i] += second[i];
        if (first[1] < 0)
        {
            first[0] = '-';
            for (int i = 1; i < first.length(); i++)
                first[i] *= -1;
        }
        else
        {
            first[0] = '+';
        }

        for (int i = first.length() - 1; i >= 2; i--)
        {
            if (first[i] < 0)
            {
                first[i - 1]--;
                first[i] += 10;
            }
        }

        if (first[1] == 0)
        {
            int z_count = 0;
            for (int i = 1; first[i] == 0; i++)
                z_count++;
            first.erase(first.begin() + 1, first.begin() + z_count + 1);
        }
    }
    for (int i = 1; i < first.length(); i++)
        first[i] += '0';
    if (first[0] == '+')
        first.erase(first.begin());
    cout << first << '\n';
}

int main()
{
    string a, b;
    cin >> a >> b;

    if (a[0] != '-') //a의 부호가 -가 아니면
        a.insert(a.begin(), '+');
    if (b[0] != '-')
        b.insert(b.begin(), '+');
    if (a[0] != b[0] && a.length() == b.length())
    {
        bool check = true;
        for (int i = 1; i < a.length() && check; i++)
        {
            if (a[i] != b[i])
            {
                check = false;
                break;
            }
        }
        if (check)
        {
            cout << 0 << endl;
            return 0;
            ;
        }
    }
    if (a.length() < b.length())
        calculation(b, a);
    else
        calculation(a, b);

    return 0;
}

// string calculator