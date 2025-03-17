#include <iostream>
using namespace std;


int setbitmask(int num, int i){
    int dynamicBitmask =   1 << i;
    return (num | dynamicBitmask);
}


int main(){

    cout << setbitmask(6,3) << endl;

    return 0;
}