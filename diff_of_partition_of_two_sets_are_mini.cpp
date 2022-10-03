#include <bits/stdc++.h>
using namespace std;
 int dp[1000][10000];
int minisum(int arr[],int n,int sum,int cal){
   
    if(n==0){
        return dp[n][cal]=abs((sum-cal)-cal);
    }
    if(dp[n][cal]!=-1){
        return dp[n][cal];
    }
        return dp[n][cal]=min(minisum(arr,n-1,sum,cal+arr[n-1]),minisum(arr,n-1,sum,cal));
    
}

int main(){
    memset(dp,-1,sizeof(dp));
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   
  int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<minisum(arr,n,sum,0);
}