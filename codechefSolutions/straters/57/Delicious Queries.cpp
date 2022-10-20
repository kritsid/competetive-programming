#include <bits/stdc++.h>
#include<vector>
#define ll long long int
using namespace std;


bool static cmp(ll a,ll b){
    return a>b;
}
int main() {
	// your code goes here
	ll t;
	cin>>t;
	
	while(t--){
	    ll n;
	    cin>>n;
	    
	    vector<ll>v(n+1);// flavour input
	    for(ll i=1;i<n+1;i++) cin>>v[i];
	    
	    vector<ll>pre(n+1,0);
	    for(ll i=1;i<n+1;i++) pre[i]=pre[i-1]+v[i];
	   //  storing prefix sum 
	   
	   ll q;
	   cin>>q;
	   
	   map<ll,set<pair<ll,ll>>>mp;
	   
	   for(ll i=0;i<q;i++){
	       ll a,b;
	       cin>>a>>b;
	       mp[a].insert({b,i});
	   }
	   
	   
	   vector<ll>res(q);// storing ans  in it
	   for(auto it:mp){
	       set<pair<ll,ll>>query=it.second;
	       ll p=it.first;
	       
	       vector<ll>prep(n+1,0);// store prefix sum of multiples of prefix
	       vector<ll>cntp(n+1,0);// store number of multiples of p in it
	       vector<ll>div;// store multiples of p in it
	       
	       
	       for(ll i=1;i<n+1;i++){
	           prep[i]=prep[i-1];
	           cntp[i]=cntp[i-1];
	           
	           if(v[i]%p==0){
	               prep[i]+=v[i];
	               ++cntp[i];
	               div.push_back(v[i]);
	           }
	       }
	       
	       
	       sort(div.begin(),div.end(),cmp);// descending order of multiples of p
	       
	       
	       vector<ll>pren(div.size()+1,0);// at index k will give k largest element sum
	       
	       for(ll i=1;i<pren.size();i++){
	           pren[i]=pren[i-1]+div[i-1];
	       }
	       
	       for(auto qq:query){
	           ll k,idx;
	           k=qq.first;
	           idx=qq.second;
	           
	           ll sum=pre[k];// all sum till index kk
	           sum=sum-prep[k];// minus multiples of p summ
	           sum+=pren[cntp[k]];
	           
	           res[idx]=sum;
	       }
        }
        
        for(auto i:res) cout <<i<<endl;
    }
    return 0;
}