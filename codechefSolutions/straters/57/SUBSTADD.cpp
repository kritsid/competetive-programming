#include <iostream>
using namespace std;

int main() {
int t,n,x,y,i;
cin>>t;
while(t--)
{
    cin>>n>>x>>y;
    int a[n],b[n];
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<n;i++)cin>>b[i];
    int z=0;
    for(i=0;i<n;i++)
    {
        if((a[i]+x==b[i]) || (a[i]+y==b[i]))continue;
        else {
            z=1;
            break;
        }
    }
    if(z==1)cout<<"no"<<endl;
    else cout<<"yes"<<endl;
}
	return 0;
}
