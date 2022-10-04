#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n){
        int a = i;
        if ((3*a+2)%4 == 0){
        i++;
        n++;
        continue;}
        cout << 3*a+2 << endl;
        i++;
        }



    }


