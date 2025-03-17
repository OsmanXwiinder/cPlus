#include <iostream>
using namespace std;


int main(){ 
    // bitwise (&-and) ,( |-or), (^-xor)
    
    cout << (3 & 5 )<< endl; 
    cout << ( 3 | 5) << endl;
    cout << (3 ^ 5) << endl;

    // bitwise (~) not
    cout << ~(6) << endl;
    
    // left (shift <<) And (right shift >>)

    cout << (7 << 1) << endl;
    cout << (7 >> 2) << endl;

     
    return 0;
}