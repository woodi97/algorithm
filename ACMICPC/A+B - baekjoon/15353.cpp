#include <iostream>
using namespace std;

void calculation(string f, string s)
{
    int gap = f.length() - s.length();
    for (int i = 0; i < f.length(); i++)
        f[gap+i] += s[i];
    for (int i = f.length() - 1; i >= 1; i--)
    {
        if (f[i] >= 10)
        {
            f[i] -= 10;
            f[i - 1]++;
        }
    }
    if (f[0] >= 10)
    {
        f[0] -= 10;
        f.insert(f.begin(), 1);
    }
    for (int i = 0; i < f.length(); i++)
        f[i] += '0';
    cout << f << "\n";
}

int main()
{
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.length(); i++)
        a[i] -= '0';
    for (int i = 0; i < b.length(); i++)
        b[i] -= '0';
    if (a.length() < b.length())
        calculation(b, a);
    else
        calculation(a, b);

    return 0;
}