// number of islands problem
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
bool v[5][5];

void formisland(int m[5][5], int i, int j)
{
    v[i][j] = 1;
    vector<int> r = {-1, -1, -1, 0, 0, 1, 1, 1};
    vector<int> c = {-1, 0, 1, -1, 1, -1, 0, 1};
    for (int k = 0; k < 8; k++)
    {
        if (i + r[k] >= 0 && i + r[k] < 5 && j + c[k] >= 0 && j + c[k] < 5)
        {
            if (m[i + r[k]][j + c[k]] == 1 && v[i + r[k]][j + c[k]] == 0)
            {
                v[i + r[k]][j + c[k]] = 1;
                formisland(m, i + r[k], j + c[k]);
            }
        }
        v[i + r[k]][j + c[k]] = 1;
    }
}

int main(int argc, char const *argv[])
{
    int m[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> m[i][j];
        }
    }
    memset(v, 0, sizeof(v));
    int c = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (m[i][j] == 1 && v[i][j] == 0)
            {
                c++;
                formisland(m, i, j);
            }
        }
    }
    cout << c;
    return 0;
}
