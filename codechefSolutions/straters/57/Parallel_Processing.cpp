#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    long int n,element,ans,sum=0;
	    cin>>n;
	   long int arr[n];
	  
	    for(int i=0;i<n;i++){
	        cin>>element;
	        sum=sum+element;
	        arr[i]=sum;
	    }
	    ans = sum;
	    for(int i=0;i<n;i++){
	        ans = min(max(arr[i],abs(sum-arr[i])),ans);
	     
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
