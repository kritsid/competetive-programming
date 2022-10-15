#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;//Number of test cases.
	vector<int> v(3);
	int maxindex,maxval;
	while (t--)
	{
	   for (int i = 0; i < 3; i++)
	   {
	       cin >> v[i];//Inputs X,Y,Z
	   }
	   maxval=v[0];
	   maxindex=0;
	   for (int i = 1; i < 3; i++)
	   {
	       if (v[i] > maxval)
	       {
	           //Storing max-valued index b/w (X,Y,Z)=>(v[0],v[1],v[2])
	           maxindex=i;
	           maxval=v[i];
	       }
	   }
	   if (maxindex == 0)
	   {
	       cout << "Setter" << endl;
	   }
	   else if (maxindex == 1)
	   {
	       cout << "Tester" << endl;
	   }
	   else
	   {
	        cout << "Editorialist" << endl;
	   }
	}
	return 0;
}

