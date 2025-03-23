#include <iostream>
using namespace std;
#include <string>

class User{ 
    private:
    int id ;
    string password;

    public:
    string username;
    User(int userid){
        this->id = userid;   
    }

    //setter
    void setPassword(string pass){
        this->password = pass;
    }
    
    //getter
    string GetPassword(){
        return password;
    }

    protected:
};

int main(){
    User u1(1);
    u1.username = "osman";
    u1.setPassword("osman@7900");
    cout << u1.username << endl;
    cout << u1.GetPassword() << endl;
    return 0;
}