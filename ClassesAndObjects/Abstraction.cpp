#include <iostream>
using namespace std;


//{abstract class}
class Shap{
    public:
    virtual void draw() = 0;  //{pure virtual function}
};  

class Circle : public Shap {
    public:
    void draw(){
        cout << "Draw cirlce\n";
    }
    
};

class Squar : public Shap {
    public:
    void draw(){
        cout << "Draw squar\n";
    }
};    


int main(){
    Circle cir1;
    cir1.draw();

    Squar Squ1;
    Squ1.draw();

    Shap a1;
    a1.draw();

    return 0;
}