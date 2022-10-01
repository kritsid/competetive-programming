// Problem: C - Counting 2
// Contest: AtCoder - Panasonic Programming Contest 2021(AtCoder Beginner Contest 231)
// URL: https://atcoder.jp/contests/abc231/tasks/abc231_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);

int main(){
    FAST1;
    FAST2;
    ll n;ll q;
    
    cin>>n>>q;
    int arr[20000];
    for(ll i=0;i<n;i++){
    	cin>>arr[i];
    }
    while(q--){
        ll m;
        cin>>m;
    	ll cnt=0;
        for(ll i=0;i<n;i++){
        	if(arr[i]>= m) cnt++;
        }
        
        cout<<cnt<<endl;
    }
    return 0;
}
