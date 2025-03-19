#include <iostream>
using namespace std;


void iBits(int num, int i){
    int bitmask = (~0 << i);
    num = num & bitmask;

    cout << num << endl;
}

int main(){ 

    iBits(15,2);

    return 0;
}