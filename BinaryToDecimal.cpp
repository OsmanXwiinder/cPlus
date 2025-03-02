#include <iostream>
using namespace std;

int BinarytoDeci(int biNum){
    int ans =0, pow =1;
    while(biNum >0){
        int rem = biNum % 10;
        ans += (rem*pow);
        biNum = biNum / 10;
        pow = pow * 2;

    }
    return ans;
}


int main(){
    int biNum = 101010;
    cout << BinarytoDeci(biNum) << endl;

    return 0;
}