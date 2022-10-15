#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int x = 0,ok=1;
	    int y=0,z=0;
	    for(int i=1;i<=n;i++){
	        cin>>ok;
	        if(i%2){
	            y^=(ok%2);
	        }
	        else {
	            x^=((ok/2));
	        }
	    }
	    x = x^y;
	    if(x){
	        cout<<"CHEF\n";
	    }else cout<<"CHEFINA\n";
	}
	return 0;
}
