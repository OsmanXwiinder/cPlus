#include <iostream>
using namespace std;



int findithelementInbinary(int num,int i){
    int dynamicBitmaask = 1 << i; // this is dynamic according to input of i

    if(!(num & dynamicBitmaask)){ // dynamic & num
        return 0;
    }else{
        return 1;
    }
}


int main(){ 
    int num = 5;

  cout << findithelementInbinary(num,2) << endl;


    return 0;
}