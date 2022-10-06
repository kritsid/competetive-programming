#include<bits/stdc++.h>

using namespace std;



int dp[50];
int am_my11(int n){
    if(dp[n]!=-1)
        return dp[n];
    if(n<2)
        return n;
    else 
        return dp[n]= am_my11(n-1)+am_my11(n-2);
         
}
int fib(int n) {
    memset(dp, -1, sizeof(dp));
    int Ans = am_my11(n);
    return Ans;   
}
int main() {

    
    int n;
    cin >> n;
    
    cout << fib(n) << endl;
    
    

    return 0;
        
}

