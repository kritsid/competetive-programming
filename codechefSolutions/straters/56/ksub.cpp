#include <bits/stdc++.h>
using namespace std;

int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}

int main(){

    int t;
    cin >> t;

    while(t--){

        int n, k;
        cin >> n >> k;

        vector <int> v(n);
        int G = 0;

        for(int i = 0; i < n; i++){
            cin >> v[i];
            G = gcd(G, v[i]);
        }

        int currG = 0, count = 0;

        for(int i = 0; i < n; i++){
            currG = gcd(currG, v[i]);
            if(currG == G){
                count++;
                currG = 0;
            }
            if(count == k) break;
        }

        if(count == k){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }

    }
    return 0;
}