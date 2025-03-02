#include <iostream>
using namespace std;
//chek prime
int isPrime(int n){
   for(int i=2; i<n; i++){
       if(n%i == 0) return false;
}
return true;
}

int coutsPrime(int n){
    int totlPrime =0;
    for(int i=2; i<n; i++){
        if(isPrime(i)){
            totlPrime++;
        }
    }
    return totlPrime;
}

int main(){

   int n =15;
   cout << coutsPrime(n);
     return 0;

}