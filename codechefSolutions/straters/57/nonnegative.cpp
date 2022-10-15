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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int neg = 0;
        bool hasZero = false;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
                neg++;
            if (arr[i] == 0)
                hasZero = true;
        }
        if (neg % 2 == 0 || hasZero)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}