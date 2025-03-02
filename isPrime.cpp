#include <iostream>
using namespace std;

int isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i != 0){
            continue;
        }else{
            cout << "Not Prime";
        }
    }
    cout << "Prime";
    return 0;
}


int main(){
    cout << isPrime(7);
     return 0;

}