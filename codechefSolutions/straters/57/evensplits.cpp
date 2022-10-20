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
        string s;
        cin >> s;
        bool hasZO = false;
        bool hasOO = false;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == '0' && s[i + 1] == '1')
                hasZO = true;
            if (s[i] == '0' && s[i + 1] == '0')
                hasZO = true;
            if (s[i] == '1' && s[i + 1] == '1')
                hasOO = true;
        }
        if (hasZO || (hasOO && s[n - 1] == '0'))
        {
            sort(s.begin(), s.end());
        }
        cout << s << endl;
    }
    return 0;
}