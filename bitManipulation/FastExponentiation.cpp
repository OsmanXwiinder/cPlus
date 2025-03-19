#include <iostream>
using namespace std;

void fastExpo(int x,int n){
    int ans =1;
    while(n > 0){
        int lastBit = n & 1;
        if(lastBit){
            ans *= x;
        }
        x *= x;
        n = n >> 1;

    }
    cout << ans << endl;
}


int main(){ 

    fastExpo(3,4);
    
    return 0;   
}