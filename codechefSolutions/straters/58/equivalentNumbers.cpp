#include <bits/stdc++.h>
using namespace std;
#define int long long
long long power(long long  a,long long l){
    long long ans=0;
    while((a%l)==0){
        a=a/l;
        ans++;
    }
    return ans;
}
long long gcd(long long p1,long long p2){
    int k=max(p1,p2);
    int h=min(p1,p2);
     if(k%h==0) return h;
     return gcd(h,k%h);
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 int t;
 cin>>t;
 int r=1e6+1;
 vector<int> v(r);
 for(int i=0;i<r;i++) v[i]=i;
 for(int i=2;i*i<r;i++){
     if(v[i]==i){
         for(int j=i*i;j<r;j+=i){
             if(v[j]==j)
              v[j]=i;
         }
     }
 }
 while(t--){
     int a,b;
     cin>>a>>b;
     int l=v[a],h=v[b];
     if(l!=h){
         cout<<"NO"<<endl;
         continue;
     }
     long long p1=power(a,l),q1=power(b,h);
     //cout<<p1<<" "<<q1<<" ";
     long long gc=gcd(p1,q1);
     long long lc=(p1*q1)/gc;
     p1=lc/p1;
     q1=lc/q1;
     long long a1=1,b1=1;
     long long m=1e9+7;
     for(int i=1;i<=p1;i++) a1=(a1*a)%m;
     for(int i=1;i<=q1;i++) b1=(b1*b)%m;
     if(a1==b1) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
     //cout<<a1<<" "<<b1<<" ";
    // cout<<a1<<" "<<p1<<" "<<b1<<" "<<q1;
 }
	return 0;
}
