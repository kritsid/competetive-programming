#include <bits/stdc++.h>
#define ll long long
#define f(i,a,b) for(ll i = (a); i <= (b); i++)
#define fr(i,a,b) for(ll i = (a); i >= (b); i--)
#define all(x) x.begin(),x.end()
#define sz(x) (ll)x.size()
#define pb push_back
#define F first
#define S second
#define vi vector<ll>
#define inf 1e9+5
#define yes cout<<"YES"
#define no cout<<"NO"
#define nn "\n"
using namespace std;
int main(){
    
ll test; cin>>test;
f(ttt,1,test){
    // cout << "Case #" << ttt << ": ";
    
    ll n; cin>>n;
    string s; cin>>s;
    ll steps=0, ones=0, zeros=0, x, st=0, en=0, c1=0, c=0;
    f(i,0,n-1){
        if(s[i]=='0') zeros++;
        else ones++;
    }
    if(n==1) {cout<<"1 0"<<nn; continue;}
    if(zeros==0 || ones==0) {cout<<n<<" 0"<<nn; continue;}
    vector<vector<ll>> ans;
    while(1){
        while(s[st]=='2') st++;
        en=st+1;
        while(s[en]=='2') en++, c1++;
        x=s[st]-'0'+s[en]-'0';
       vi v;
        if(ones==zeros) {
            v.pb(1), v.pb(ones+zeros), v.pb(1);
            ans.pb(v);
            break;
            }
        if(x==1) ones--, zeros--;
        if(x==1 && ones<zeros){
            v.pb(st+1-c), v.pb(st+2-c), v.pb(1), ans.pb(v);
            ones++;
            s[st]='1';
            s[en]='2';
            st=0;
            en=0;
            c1=0;
        }else if(x==1 && ones>zeros){
            v.pb(st+1-c), v.pb(st+2-c), v.pb(0), ans.pb(v);
            zeros++;
            s[st]='0';
            s[en]='2';
            st=0;
            en=0;
            c1=0;
        }else{
            st=en;
            en=0;
            c=c1;
        }
        // cout<<s<<" "<<ones<<" "<<zeros<<nn;
        // cout<<x<<nn;
    }
    cout<<1<<" "<<sz(ans)<<nn;
    f(i,0,sz(ans)-1) cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<nn;
    // cout<<nn;

}
    
}