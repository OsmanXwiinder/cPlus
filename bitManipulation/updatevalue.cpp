#include <iostream>
using namespace std;



void updateIthBit(int num, int val, int i){
    num = num & ~(1 << i); // clearing ith bit

    num= num | (val << i);

    cout << num << endl;
}

int main(){
  
  

    updateIthBit(7, 0,2);

    return 0;
}