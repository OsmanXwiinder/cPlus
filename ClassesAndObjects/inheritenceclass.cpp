#include <iostream>
using namespace std;
#include <string>

class Animal{
    public:
    string color;

    void eat(){
        cout << "eats\n";
    }
    void breath(){
        cout << "breathe\n";
    }
    
    
};

class Fish : public Animal{
    public:
    int fins;

    void swim(){
        eat();
        cout << "swimming...\n";
    }
};

int main(){
    Fish f1;
    f1.fins =  3;
    f1.color = "orange";
    cout << f1.color << endl;
    cout << f1.fins << endl;
   
    return 0;
}