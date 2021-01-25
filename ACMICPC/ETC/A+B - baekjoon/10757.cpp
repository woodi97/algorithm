#include <iostream>
using namespace std;

void calculation(string first, string second)
{
    for (int i = 0; i < first.length(); i++)
        first[i] -= '0';
    for (int i = 0; i < second.length(); i++)
        second[i] -= '0';

    int gap = first.length() - second.length();
    for (int i = 0; i < second.length(); i++)
        first[gap + i] += second[i];
    for (int i = first.length() - 1; i >= 1; i--)
    {
        if (first[i] >= 10)
        {
            first[i - 1]++;
            first[i] -= 10;
        }
    }
    if (first[0] >= 10)
    {
        first[0] -= 10;
        first.insert(first.begin(), 1);
    }
    for(int i=0;i<first.length();i++)
        first[i] += '0';
    cout << first << "\n";
}

int main()
{
    string a, b;
    cin >> a >> b;
    if (a.length() < b.length())
        calculation(b, a);
    else
        calculation(a, b);
    return 0;
}