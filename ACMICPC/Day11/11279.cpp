#include <iostream>
using namespace std;

int v[400000] = {0};

void swap(int i1, int i2)
{
    int temp = v[i2];
    v[i2] = v[i1];
    v[i1] = temp;
}

void insert_node(int idx, int input)
{
    v[idx] = input;
    while (idx > 1 && v[idx] > v[idx / 2])
    {
        swap(idx, idx / 2);
        idx = idx / 2;
    }
}

void delete_node(int last_idx)
{
    int i = 1;
    v[1] = v[last_idx];
    v[last_idx] = 0;
    while (v[i] < v[i * 2] || v[i] < v[i * 2 + 1])
    {
        if (v[i * 2] > v[i * 2 + 1])
        {
            swap(i, i * 2);
            i = i * 2;
        }
        else
        {
            swap(i, i * 2 + 1);
            i = i * 2 + 1;
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // j는 배열의 idx를 참조하기 위해 있는 변수
    int n, i, j = 0;
    int input;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> input;
        if (input == 0)
        {
            if (j == 0)
                cout << 0 << "\n";
            else
            {
                cout << v[1] << "\n";
                delete_node(j);
                j--;
            }
        }
        else
        {
            j++;
            insert_node(j, input);
        }
    }
    return 0;
}