#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    int num;
	    cin>>num;
	    string answer = "";
	    char alpha = 97;
	    while(num--){
	        answer += alpha;
	        alpha++;
	        if(alpha==123)alpha=97;
	    }
	    cout<<answer<<endl;
	}
	return 0;
}
