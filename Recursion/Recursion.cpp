#include <iostream>
using namespace std;


int Factorial(int n){
    if(n == 0){
        return 1;
    }

    return n * Factorial(n-1);
}

void print(int n){
    if(n==0){
        return;
    }
    cout << n << " ";
    print(n-1);
}

int main(){
    int ans  = Factorial(5);
    cout << ans << endl;

    print(5);

    return 0;
}