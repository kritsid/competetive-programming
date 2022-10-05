
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int flag = 0;
    int i = 0;
    while (n > 0){
            int a;
            a = n%10;
            if (a == 0 && flag == 0){
                n = n/10;
                continue;
            }
            flag = 1;
            n = n/10;
            cout << a;
        }
}
