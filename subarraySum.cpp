//Given an array of n integers, your task is to count the number of subarrays having sum x.
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
using namespace std;
 
 
void Am_my11(){
    fast_io;
}
const int N = 1000009;
 
 
int main() {
    Am_my11();
    
    ll n, x;
    cin >> n >> x;
    ll A[n];
    ll ans = 0;
    
    
    fr(0,n){
        if(i==0){
            cin >> A[i];
        }
        else{
            ll t;
            cin >> t;
            A[i]=A[i-1]+t;
        }
    }
    map<ll, ll>mp;
    mp[0]=1;
    fr(0,n){
        ans+=mp[A[i]-x];
        mp[A[i]]++;
    }
    
    cout << ans << endl;
 
    return 0;
        
}