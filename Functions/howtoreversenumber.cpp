#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n = 2345;

    int reverse = 0;

    while(n>0){
        int lastDigit = n%10;
        reverse = reverse*10 + lastDigit;
        n=n/10;
    }
    cout << reverse << endl;
    return 0;    
}