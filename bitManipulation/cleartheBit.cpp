#include <iostream>
using namespace std;


int clearBit(int num, int i){
    int bitmask = ~(1 << i);

    return num & bitmask;

}


int main(){

    cout << clearBit(6,1) << endl;

    return 0;
}