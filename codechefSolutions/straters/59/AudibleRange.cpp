//(https://www.codechef.com/submit/AUDIBLE)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;//No. of test cases
    int X;
    for(int i=0;i<t;i++)
    {
        cin>>X;
        if((X>=67)&&(X<=45000))//Audible frequency range
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

