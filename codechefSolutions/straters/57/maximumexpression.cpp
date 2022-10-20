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
        int pluses = 0, minuses = 0;
        string ans = "";
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '+')
                pluses++;
            else if (s[i] == '-')
                minuses++;
            else
                pq.push(s[i] - '0');
        }
        int m = pq.size();
        for (int i = 0; i < m - pluses - minuses; i++)
        {
            ans += to_string(pq.top());
            pq.pop();
        }
        while (pluses--)
        {
            ans += '+' + to_string(pq.top());
            pq.pop();
        }
        while (minuses--)
        {
            ans += '-' + to_string(pq.top());
            pq.pop();
        }
        cout << ans << endl;
    }
    return 0;
}