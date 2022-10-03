#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int count=0;
    vector<int> prime(n,1);

    for(int i=2;i<=n;i++){
        if(prime[i]==1){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=0;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(prime[i]==1){
            cout<<i<<" ";
            count++;
        }
    }
    cout<<endl;
    cout<<"total prime= "<<count;
}

