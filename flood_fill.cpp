// flood fill
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
bool v[8][8];

void fill(int m[8][8], int x, int y, int col, int prev)
{
    m[x][y] = col;
    v[x][y] = 1;
    vector<int> r = {-1, -1, -1, 0, 0, 1, 1, 1};
    vector<int> c = {-1, 0, 1, -1, 1, -1, 0, 1};
    for (int i = 0; i < 8; i++)
    {

        if (x + r[i] >= 0 && x + r[i] < 8 && y + c[i] >= 0 && y + c[i] < 8)
        {
            if (m[x + r[i]][y + c[i]] == prev && v[x + r[i]][y + c[i]] == 0)
            {
                m[x + r[i]][y + c[i]] = col;
                v[x + r[i]][y + c[i]] = 1;
                fill(m, x + r[i], y + c[i], col, prev);
            }
        }
    }
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
    fill(m, x, y, col, m[x][y]);
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
