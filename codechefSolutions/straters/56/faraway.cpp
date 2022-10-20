#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,m;
        cin>>n>>m;
        long long int arr[n];
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long int A=0;
        for(long long int i=0;i<n;i++){
            long long int k=abs(m- arr[i]);
            long long int l=abs(arr[i]- 1);
            long long int d=max(k,l);
            A+=d;
        }
        cout<<A<<endl;
    }
}