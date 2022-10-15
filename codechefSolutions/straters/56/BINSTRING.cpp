#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int answer=n;
		for(int i=1; i<n; ++i){
			if(s[i]==s[i-1]) answer--;
		}
		cout << answer << endl;
	        
	    }
	    
	return 0;
}
