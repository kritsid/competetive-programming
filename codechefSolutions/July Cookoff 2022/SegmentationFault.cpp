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
        int n;
        cin>>n;
        vector<int> vec(n+1,0),vec2;
        for(int i=1;i<=n;i++){
            int x,y;
            cin>>x>>y;
            for(int j=x;j<=y;j++){
                if(i==j) vec[j]=-1;
                else if(j!=i){
                    if(vec[j]==-1) continue;
                    else vec[j]++;
                }
            }
        }
        
        int maxi=maximum(vec);
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(vec[i]==maxi){
                vec2.pb(i);
                cnt++;
            }
        }
        cout<<cnt<<endl;

        for(int i=0;i<vec2.size();i++){
            cout<<vec2[i]<<endl;
        }
    }
    return 0;
}