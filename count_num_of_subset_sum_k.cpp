#include <bits/stdc++.h>
using namespace std;

int targetsum(int arr[],int n,int sum){
if(n==0 ){
    return 0;
}
if(sum==0){
    return 1;
}

if(arr[n-1]>sum){
    return targetsum(arr,n-1,sum);
}

return targetsum(arr,n-1,sum) + targetsum(arr,n-1,sum-arr[n-1]);
}

int main (){
    int arr[5]={2,3,5,10,11};
    int sum=10;
    cout<<targetsum(arr,5,sum);
    
}

/*
#include <bits/stdc++.h>
using namespace std;
long long N= 1e9+7;

long long dp[1000][1000];
int targetsum(int arr[],int n,int sum){
    
if(n==0 & sum>0){
    return 0;
}
if(sum==0){
    return 1;
}
if(dp[n-1][sum]!=-1){
    return dp[n-1][sum];
}

if(arr[n-1]>sum){
    return dp[n-1][sum]=targetsum(arr,n-1,sum);
}

return dp[n-1][sum]=targetsum(arr,n-1,sum) + targetsum(arr,n-1,sum-arr[n-1]);
}

int main (){
    memset(dp,-1,sizeof(dp));
    int arr[5]={10,10,10,5,5};
    int sum=10;
    int n=5;
    cout<<targetsum(arr,n,sum);
    
}
*/