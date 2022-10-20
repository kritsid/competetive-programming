#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    int n,k;
	    cin>>n>>k;
	    if(n==1 && k==1)cout<<"1"<<endl;
	    else{
	        if(k<2 || k>n)cout<<"-1"<<endl;
            else{
                int val=0;
                for(int i=0;i<k-1;i++){
                    cout<<i+1<<" ";
                    val=i;
                }
                for(int i=0;i<n-val-1;i++)cout<<n-i<<" "; 
                
                cout<<endl;
            }
	    }
	}
	return 0;
}
