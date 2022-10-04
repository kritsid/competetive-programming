#include <iostream>
using namespace std;

int main(){
    int input,choice;
    cin >> input >> choice;

    int i = 1;
    int sum = 0;
    int prod = 1;
    while (i <= input){
        if (choice == 1){
            sum = i+sum;

            }
            else if (choice == 2){
                prod = prod*i;
                }

                else {
                    cout << -1 << endl;
                    break;
                }
        i++;
            }
        if (choice == 1){
            cout << sum <<endl;
            }
             else if (choice == 2) {cout << prod <<endl;}

        }

