#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int x,y;
    cin>>x>>y;
    if(x<y)
    {
        cout<<"repair"<<endl;
    }
    else if(x>y)
    {
        cout<<"new phone"<<endl;
    }
    else
    {
        cout<<"any"<<endl;
    }
}
	return 0;
}