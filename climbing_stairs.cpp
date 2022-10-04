//You are climbing a staircase. It takes n steps to reach the top.
//Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top

#include<bits/stdc++.h>
using namespace std;

int waysToReachTop(int n, vector<int> &dp){
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    int ans=waysToReachTop(n-1, dp);
    if(n>=2) ans+=waysToReachTop(n-2, dp);
    return dp[n]=ans;
}


int main(){
    int n; 
    cin>>n;
    vector<int> dp(n+1, -1);
    cout<<"Number of ways to reach the top is - "<<waysToReachTop(n, dp)<<endl;
    return 0;
}