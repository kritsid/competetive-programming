// Program created by Nirmal Shah

#include <iostream>
using namespace std;

int main() {
    int n, org, rem, answer = 0;
    cout << "Please input a Number: ";
    cin >> n;
    org = n;

    while (org != 0) {        
        rem = org % 10;        
        answer += rem * rem * rem;
        org /= 10;
    }
    if (answer == n)
        cout << n << " is an Armstrong value.";
    else
        cout << n << " is not an Armstrong value.";
    return 0;
}
