#include <bits/stdc++.h>
using namespace std;
void iA(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}
int main()
{

    int n, m;
    cin >> n >> m;
    if (n >= 2 * m)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}