#include <bits/stdc++.h>
using namespace std;
# define ll long long int 

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int numTests;
	cin >> numTests;
	while(numTests-- )
	{
	    int array[3];
	    for (int i = 0; i < 3; i++)
	    {
	        cin >> array[i];
	        if (array[i] > 3)
	        {
	            array[i] = 3;
	        }
	    }
	    sort(array, array + 3); 
	    int result = 0;
	    for (int i = 0; i < 3; i++)
	    {
	        result += (array[i] > 0);
	        array[i] -= (array[i] > 0);
	    }
	    if (array[2] && array[1])
	    {
	        result++ ;
	        array[2]--;
	        array[1]-- ;
	    }
	    if (array[0] && array[2])
	    {
	        result++ ;
	        array[0]--;
	        array[2]-- ;
	    }
	    if (array[0] && array[1])
	    {
	        result++ ;
	        array[0]--;
	        array[1]-- ;
	    }
	    cout << result << endl;
	}
	return 0;
}
