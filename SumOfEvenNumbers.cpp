#include <iostream>
using namespace std;

int main(){
int n;
cout << "Enter any number:" << endl;
cin >> n;

int a = 0;
int sum = 0;
while (a <= n){

sum = sum+a;
a = a+2;

}
cout << "the sum of the numbers is:" << endl << sum;
}
