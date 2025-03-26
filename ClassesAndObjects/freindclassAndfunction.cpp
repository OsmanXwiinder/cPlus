#include <iostream>
using namespace std;
#include <string>


class A {
    string secret = "i am Secret string";
    friend class B;                     // become also freind
    friend void revealSecret(A &obj);   // become freind
};

class B {   // {B class becomes the freinds of A Class}
    public:
     void showSecret(A &obj){
        cout << obj.secret << endl;
    }
};

void revealSecret(A &obj){    // taking object of A class
    cout << obj.secret << endl;
}

int main(){
    A a1;
    B b1;

    b1.showSecret(a1);
    revealSecret(a1);   // calling
    return 0;
}