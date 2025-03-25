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
        :
    string size;
    
    string print(string s){
        this->size = s;
    }
};

int main(){
    Child child1;
    child1. print("bada");

    return 0;
}