#include <iostream>
using namespace std;

class Car{
    public:
    string name;
    string color;
    int *mileage; 
    Car(string name, string color){
        this->name = name;
        this->color = color;
        mileage = new int; 
        *mileage = 12;
    }
    Car(Car &original){
        cout << "copying original to new" << endl;
         name = original.name;
         color = original.name;
         mileage = new int; // for a deep copy we allocate again dynamically
         *mileage = *original.mileage; // address ye bhi   ye mileage kha point karega jha 
                                    // *original.mileage karega to actaul copy ho jaygi
    }
};

int main(){
    Car c1("suzuki","black");

    Car c2(c1);  
    cout << "s2 name => " << c2.name << endl;
    cout << "s2 color => " << c2.color << endl; 
    cout << *c2.mileage << endl;
    *c2.mileage = 10;
    cout << *c1.mileage << endl; // koi change nhi abb 
    return 0;
} 