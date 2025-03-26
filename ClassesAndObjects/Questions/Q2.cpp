#include <iostream>
using namespace std;
/*
Question 1 : Create a class to store Complex numbers. Using operator overloading,
create the logic to subtract one complex number from another.
Note - In Complex numbers, the real part of 1st gets subtracted from the real part of
2nd number. Same goes for the imaginary part.
*/

class Complex{
    private: // private me to properties
    int real;
    int img;

    public:
    Complex(int r, int i){   // constructer .. real , img 
        this->real = r;
        this->img = i;
    }
    void showNumber(){    // function for print complex number
        cout << real << "+" << img << "i" << endl;
    }

    Complex operator - (Complex &c2){   // operator Overloading  - c2 - c1     0=>._.<=0
        int newReal = this->real - c2.real;
        int newImg = this->img - c2.img;
        Complex c3(newReal,newImg);

        return c3;
    }
};



int main(){
       Complex c1(2,3);
       Complex c2(1,2);

       Complex c3 = c2 - c1;
        
       c3.showNumber(); 
       


    return 0;
}