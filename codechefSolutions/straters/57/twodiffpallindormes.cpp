#include <bits/stdc++.h>
using namespace std;
void iA(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 1 || b == 1)
            cout << "NO" << endl;
        else if (a % 2 != 0 && b % 2 != 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}