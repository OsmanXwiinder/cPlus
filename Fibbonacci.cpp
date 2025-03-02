#include <iostream>
using namespace std;

void fibonacci(int n){
    int a=0, b=1;
    cout << "Fibonacci Series : ";
    for(int i=0; i<n; i++){
        cout << a << " ";
        int nextTerm = a+b;
        a=b;
        b=nextTerm;
    }
    cout <<endl;
}


int main(){
    int n;
    cout << "Enter the Number :";
    cin >> n;

    fibonacci(n);
    return 0;
}