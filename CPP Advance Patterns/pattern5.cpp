#include <iostream>
using namespace std;
// Palindromic Pattern

// row  = 1<>n
// spaces = 1<>n - row number 
// collumn = 1 <> n
// elements  = 
int main(){
    int n = 5;
    for(int i = 1; i <= n; i++){
        int j;
        for(j = 1; j <= n-i; j++) {
            cout << " ";
        }
        int k = i;
        for(; j <= n; j++) {
            cout << k--;
        }
        k=2;
        for(;j<=n+i-1; j++) {
            cout << k++;
        }
        cout << endl;
    }
    return 0;
}