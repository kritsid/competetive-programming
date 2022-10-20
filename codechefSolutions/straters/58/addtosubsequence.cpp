#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	// your code goes here
	ll T;
	cin>>T;
	while(T--)
	{
	    ll n;
	    cin>>n;
	    vector<ll> a(n);
	    for(ll i=0; i<n; i++)
	     cin>>a[i];
	     
	    ll min_ans_ops=0;
	    unordered_map<ll,ll> mp;
	    ll max_tom=0;
	    for(auto x:a)
	    {
	        mp[x]++;
	    }
	    
	    for(auto x:a)
	    {
	        if(mp[x]>max_tom) max_tom= mp[x];
	    }
	  ll val = 1;
    while(val < max_tom)
    {
        ++min_ans_ops;
        val*=2;
    }
	    
	    cout<<min_ans_ops<<endl;
	}
	return 0;
}
