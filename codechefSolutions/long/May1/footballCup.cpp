#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x > 0 && y > 0 && x == y)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}