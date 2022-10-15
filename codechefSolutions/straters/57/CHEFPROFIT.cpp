#include <iostream>
using namespace std;

int main() {
	int test,x,y,z,profit;
	cin>>test;
	while(test--)
	{
	    cin>>x>>y>>z;
	   profit=x*(z-y);
	    cout<< profit<<endl;
	}
	return 0;
}
