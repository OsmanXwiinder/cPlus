#include <iostream>
using namespace std;
#include <string>


class Animal{
    public:
    string color;

    void eat(){
        cout << "eating..\n";
    }
    void breath(){
        cout << "breathing..\n";
    }
    void Fastrun(){
        cout << "running Fast...\n";
    }
}

class Bird : public Animal{
    public:
    string name;

    void flying(){
       cout << "flying..\n";
    }
}

class Mammel : public Animal{
    public:
    string type;

    void tear(){
        cout << "tearing  a thing..\n";
    }
}

class Insects : public Mammel{
    public:
    float size;

    void sound(){
        cout << "sounding..\n";
    }
}

    int main(){

       Bird b1;
       b1.name = "Kabutar";
       b1.color = "orange";

       Mammel m1;
       m1.type = "human";
       m1.color ="Gora";

        Insects i1;
        i1.size = 3.2;
        i1.sound();
        i1.color = "greeen";


        return 0;
    }