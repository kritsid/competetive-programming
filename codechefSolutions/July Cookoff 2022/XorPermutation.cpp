#include <bits/stdc++.h>
using namespace std;

#define int long long
#define F first
#define S second
#define pb push_back
#define pqa priority_queue<int, vector<int>, greater<int>>
#define pqd priority_queue<int>

#define all(x) x.begin(), x.end()
#define sort(x) sort(all(x))
#define reverse(x) reverse(all(x))
#define minimum(x) *min_element(all(x))
#define maximum(x) *max_element(all(x))
void invec(vector<int> &vec, int n)
{
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.pb(x);
    }
}
void printvec(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c,d,e,f,n,m,p,q,r,s,x,y,z;
        cin>>n;
        if(n==3) cout<<-1<<endl;
        else{
            cout<<1<<" "<<4<<" "<<3<<" "<<2<<" ";
            for(int i=5;i<=n;i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}