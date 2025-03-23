#include <iostream>
using namespace std;

class Car{
    
    private:
    string name;
    string color;
    public:

    Car(){    // a normal one
        cout << "contructor without parames called\n"; 
    }

    Car(string nameVal, string colorVal){    // this constructor made by own but normally created the constructor
        cout << "contructor with params and pointer called" // prop value intitalization  
        cout << "Constructor is called object being created\n";
        this->name = nameVal;                    // this is a speacial pointer in C++ that points to the current obects         
        this->color = colorVal;                  // they should look like this -> prop name 
                                                // we can also write write like this *this.prop  
    }

        void start(){
            cout << " started\n";
        }
        void stopped(){
            cout << "stopped\n";

        }
        //getter 
        string getCarName(){
            return name;
        }
        string getCarcolor(){
            return color;
        }
    protected:
    
};


int main(){
    Car  0;// non-parames contructro
    Car c1("maruti 800", "blue"); // with parames
    cout << c1.getCarName() << endl;
    cout << c1.getCarcolor() << endl;
    return 0;
}