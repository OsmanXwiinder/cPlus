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
    }
};

int main(){
    Car s1("suzuki","black");

    Car s2(s1);
    Car s3(s2);
    cout << "s2 name => " << s3.name << endl;
    cout << "s2 color => " << s3.color << endl;
    return 0;
} 