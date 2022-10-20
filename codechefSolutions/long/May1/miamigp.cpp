#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    float a;
	    cin>>x>>y;
	    a=(float)107*x/100;
	    if(y<=a)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	 
	}
	return 0;
}