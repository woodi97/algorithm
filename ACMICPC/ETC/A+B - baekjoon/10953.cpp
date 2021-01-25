#include <iostream>

using namespace std;

int main(void)
{
    int tc, a, b;
    char coma;
    cin >> tc;

    while (tc > 0)
    {
        cin >> a >> coma >> b;
        if (coma == ',')
        {
            cout << a + b << endl;
            tc--;
        }
        else break;
    }
    return 0;
}

//뭐야 왜 맞아?