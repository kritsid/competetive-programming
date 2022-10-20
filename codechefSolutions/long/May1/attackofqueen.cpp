#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n,x,y;
	    cin >> n >> x >> y;
	    
	        int a = x - 1;
	        int b = n - y;
	        int c = n - x;
	        int d = y - 1;
	        
	        int e = min(a,b);
	        int f = min(b,c);
	        int g = min(c,d);
	        int h = min(a,d);
	        
	        int ans = 2*(n - 1) + e + f + g + h;
	        
	        cout << ans << endl;
	}
	return 0;
}