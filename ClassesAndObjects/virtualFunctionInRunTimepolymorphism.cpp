#include <iostream>
using namespace std;

class Prarent{
    private:
    string name;

    public:
    virtual void print(){
        cout << "hello there" << endl;
    }
};

class Child : public Prarent{
      public:
      void print(){
        cout << "hello ffrom child there" << endl;
      }
    

};

int main(){
    Child child1;
    
    Prarent *ptr;
    ptr = &child1; // Run Time Binding
    ptr->print();  // virtual Function

    return 0;
}