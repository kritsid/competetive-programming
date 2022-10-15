#include <iostream>
using namespace std;

int main() {
	int t,i,x,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k>>x;
	    if(k<x)cout<<"-1"<<endl;
	    else{
	        int arr[n];
	            int y=0;
	          for(i=0;i<n;i++,y++)
	          {
	              if(y==x)y=0;
	              arr[i]=y;
	              
	         
	        }
	       
	        for(i=0;i<n;i++)cout<<arr[i]<<" ";
	
	    cout<<endl;
}
	}
	return 0;
}
