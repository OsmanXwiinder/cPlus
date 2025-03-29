#include <iostream>
using namespace std;


int Pow(int x, int n){

    if(n == 0){
        return 1;
    }
     
    int halfPow = Pow(x, n/2);

    int halfPowSquar = halfPow * halfPow;

    if(n%2 != 0) {
        return halfPowSquar * x;
    }
    return halfPowSquar;

}

int main(){

    cout << Pow(2,5) << endl;

    return 0;
}