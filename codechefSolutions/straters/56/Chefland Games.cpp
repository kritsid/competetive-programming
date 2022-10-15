#include <iostream>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int arr[4];
        int a=0,i=0;
        for(int i=0;i<4;i++){
            cin>>arr[i];
            
        }
        for(int j=0;j<4;j++){
            if(arr[j]==1){
                cout<<"OUT"<<endl;
                break;
            }
            else if(j==3 && arr[j]==0){
                cout<<"IN"<<endl;
                break;
            }
        }
    }
	// your code goes here
	return 0;
}
