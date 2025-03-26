#include <iostream>
using namespace std;

// void counter(){
//     static int count = 0;
//     count++;
//     cout << "count : " << count << endl;
// }   
 
class Example{
    public: 
    static int x;

};

int Example::x = 0;

class Osman{
    public:
    Osman(){
        cout << "contructor..\n";
    }
    ~Osman(){
        cout << "Destructor..\n";
    }

};

int main(){ 
    int a = 0;
    if(a==0){
        static Osman os1;
    }   

    cout << "code ending..." << endl;

    return 0;
}