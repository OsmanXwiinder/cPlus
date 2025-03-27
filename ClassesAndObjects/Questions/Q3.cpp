#include <iostream>
using namespace std;


/*
Question 2 ::=> Create a class BankAccount with private attributes accountNumber and
balance. Implement public methods deposit(), withdraw(), and getBalance() to
manage the account.
*/

class BankAccount{
    private:
    int accountNumber;
    float balance;

    public:
    BankAccount(int acc, float bal){
        this->accountNumber = acc;
        this->balance = bal;
    }
    void deposit(float money){
        this->balance += money;
    }
    void withdraw(float with){
        this->balance -= with;
        
    }
    void getBelance(){
        cout << "Your Total Balaemce: " << balance << " INR" << endl;
    }

};


int main(){
    BankAccount person(32487642, 40000.0);

    person.deposit(345.8);
    person.withdraw(33.5);
    person.getBelance();
    return 0;
}