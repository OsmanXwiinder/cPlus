#include <iostream>
using namespace std;

int isPowerOfTwo(int num){
    if(!(num & (num-1))){
        return true;
    }else{
        return false;
    }
}

int main(){
    cout << boolalpha;
    cout << isPowerOfTwo(4) << endl; 
    return 0;
}