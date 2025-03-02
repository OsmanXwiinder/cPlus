#include <iostream>
using namespace std;

void passByValue(int a){
     a = 10;
    // cout<< "passbyvalue => " << a << endl;
}

void passByReference(int* ptr){
     *ptr = 40;
    // cout << "passbyReference => " << a << endl;
}

int main(){
    int a = 20;
    int *ptr = &a;
    cout << "orignal =>" << a << endl;

    passByValue(a);
    cout<< "passbyvalue => " << a << endl;

    passByReference(ptr);
    cout << "passbyReference => " << a << endl;
    


    return 0;
}