// cycle in matrix
#include <iostream>
#include <vector>
using namespace std;
int v[8][8];

bool iscycle(int m[8][8], int x, int y, int px, int py)
{
    v[x][y] = 1;
    int r[4] = {-1, 0, 0, 1};
    int c[4] = {0, -1, 1, 0};
    for (int i = 0; i < 4; i++)
    {
        if (x + r[i] >= 0 && x + r[i < 4] && y + c[i] >= 0 && y + c[i] < 4)
        {
            if (m[x + r[i]][y + c[i]] == m[x][y] && !(px == x + r[i] && py == y + c[i]))
            {
                if (v[x + r[i]][y + c[i]])
                {
                    return true;
                }
                else
                {
                    bool check = iscycle(m, x + r[i], y + c[i], x, y);
                    if (check)
                        return true;
                }
            }
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    int m[8][8];
    int col, x, y;
    cin >> col >> x >> y;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> m[i][j];
        }
    }
    memset(v, 0, sizeof(v));
    bool cycle = 0;
    for (int i = 0; i < 8; i++)
    {
        if (cycle == true)
            break;
        for (int j = 0; j < 8; j++)
        {
            if (v[i][j] == 0)
            {
                cycle = iscycle(m, i, j, -1, -1);
            }
        }
        if (cycle == true)
            break;
    }
    if (cycle == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}
