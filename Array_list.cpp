#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

void SelectionSort(int Array[],const int Size){
	int i,j,smallest,temp;
	for(i=0;i<Size;i++){
		smallest=i;
		for(j=i;j<Size;j++){
			if(Array[smallest]>Array[j]){
				smallest=j;
			}
		}
	temp=Array[i];
	Array[i]=Array[smallest];
	Array[smallest]=temp;	
	}
	for(int iii=0;iii<8;iii++)
		cout<<setw(3)<<Array[smallest];
	cout<<endl<<endl;

}

int main(){

	int NumList[8] = {5, 34, 32, 25, 75, 42, 22, 2};
 	int temp;
 	cout<<"Data sebelum diurutkan: \n";
 	for (int d=0; d<8; d++){
		cout<<setw(3)<<NumList[d];
 	}
 
 	cout<<"\n\n";
 	SelectionSort(NumList,8);
 
 	cout<<"Data setelah diurutkan:\n";
 	for (int iii=0; iii<8; iii++){
 		cout<<setw(3)<<NumList[iii]<<endl<<endl;
 	}
 	getche();
}
