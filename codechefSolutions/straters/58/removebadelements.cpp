#include <bits/stdc++.h>
using namespace std;

int minop(vector<int> v)
{
    int n=v.size();
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[v[i]]++;   
    }
    int maxval=0,sums=0;
    for(auto it:mp)
    {
        maxval=max(maxval,it.second);//Storing max frequency 
        sums+=it.second;//Sum of all elements frequencies.
    }
    return sums-maxval;
}

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    for(int j=0;j<n;j++)
	    {
	        cin>>v[j];
	    }
	    cout<<minop(v)<<endl;
	}
	return 0;
}
