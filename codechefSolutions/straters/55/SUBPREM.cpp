#include <iostream>
#include <algorithm>
using namespace std;

int main() {
int t,i;
cin>>t;
while(t--)
{ int n,k;
    cin>>n>>k;
 if(n==1 && k==1)cout<<"1";
    else{
          if(k<2 || k>n)cout<<"-1";
         else{ int y=0;
          for(i=0;i<k-1;i++)
          {
              cout<<i+1<<" ";
              y=i;
          }
          for(i=0;i<n-y-1;i++)cout<<n-i<<" ";
         }
    }
    cout<<endl;
}
	return 0;
}
