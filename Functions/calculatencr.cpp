#include <iostream>
#include <cmath>
using namespace std;

int fact(int n){
    int factorial = 1;
    for(int i = 2; i <= n; i++) {
        factorial *=i;
    }
    return factorial;
}
int main(){
    int n = 5, r= 2;
    int ans = fact(n)/(fact(r)*fact(n-r)); // formula for ncr
    cout<<ans<<endl;
    return 0;
}