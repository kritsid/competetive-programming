#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int mod=1e9 + 7;
ll n=1000009;
vector<ll>fact(n,1);

void start(){
    for(int i=1;i<n;i++)
    fact[i]=(fact[i-1]*i)%mod;
    return ;
    
}
ll binpow(ll a,ll b,ll p){
    ll res=1;
    while(b>0){
        if(b&1)
        res=(res*a)%p;
        a=(a*a)%p;
        b>>=1;
    }
    return res; 
    
}
ll inverse(ll a ,ll n){
    return binpow(a,n-2,n);
}
ll ncr(ll n , ll r){
    if(n < r|| (n < 0) || (r < 0)) return 0 ; 
    return ((((fact[n] * inverse(fact[r] , mod)) % mod) * inverse(fact[n-r] , mod)) % mod);
}
ll get_ans(ll n, ll x)
{
    ll one=n+x;
    if(one%2==1) return 0 ;
    one/=2;
    
    return ncr(n,min(one,n-one)) ;
}



void solve(){
    ll n,l,r;
    cin>>n>>l>>r;
    for(int i=l;i<=r;i++){
    ll ans=get_ans(n,i);
    
    if(i==l) cout << ans;
    else cout << ' ' << ans;
        
    }
}

int main(){
    ios_base::sync_with_stdio;
    cin.tie(NULL);cout.tie(NULL);
    start();
    ll t=1;
    cin>>t;
    while(t--){
    solve();
    cout<<endl;
    }
    
    return 0;
}