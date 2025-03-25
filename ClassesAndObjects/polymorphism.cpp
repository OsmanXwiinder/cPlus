#include <iostream>
using namespace std;

// Function Overloading Comiple Time Polyporphism
class Print{
    public:
    void show(int x){
        cout<< "int: " << x << endl;
    }
    void show(string str){
        cout<< "int: " << str << endl;
    }
};

class Complex{
    private:
    int real;
    int img;

    public:
    Complex(int r, int i){
        this->real = r;
        this->img = i;
    }
    void Shownumber(){
        cout << real << "+" << img <<"i\n";
    }
    Complex operator + (Complex &c2){
        int resReal  = this->real + c2.real;
        int resImg = this->img + c2.img;
        Complex c3(resReal,resImg);
        cout << "res = ";
        // c3.Shownumber();
        return c3;
    }
};

class Parent{
    public:
    void show(){
        cout << "parent show" << endl;
    }
};

class Child : public Parent{
    public:
    void show(){
     cout << "Child Show" << endl;    
    } 
};

int main(){
    Child child1;
    child1.show();

    return 0;
}