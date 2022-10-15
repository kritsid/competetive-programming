#include <bits/stdc++.h>
using namespace std;

void solve()
{
   long long n;
   cin>>n;
   long long arr[n];
   for(int i=0; i<n; i++)
     cin>>arr[i];
   int e=0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]%2==0)e++;
      // else o++;
   }
   if(e==n)cout<<0<<endl;
   else cout<<e<<endl;
}

int main() 
{
	int T;
	cin >> T;
	while(T--)
	{
	    solve();
	}
	return 0;
}
