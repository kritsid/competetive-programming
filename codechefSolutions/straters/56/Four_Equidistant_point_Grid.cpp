#include <iostream>
using namespace std;

int main() {
int d;
cin>>d;
if(d%2!=0)cout<<"-1";
else
{
    cout<<"0"<<" "<<d/2<<endl;
    cout<<"0"<<" "<<-d/2<<endl;
    cout<<-d/2<<" "<<"0"<<endl;
    cout<<d/2<<" "<<"0"<<endl;
}
	return 0;
}
