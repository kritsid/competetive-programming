#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,res;
	    cin>>n;
	    res = n*50;
	    cout<<res-(res*20/100)-(res*20/100)-(res*30/100)<<endl;
	}
	return 0;
}