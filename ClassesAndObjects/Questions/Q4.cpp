#include <iostream>
using namespace std;
#include <string>

/*
   Question 3 : Create a base class Person with attributes name and age.
   Derive a class Student from Person and add an additional attribute studentID.
   Implement a method displayStudentInfo( ) in the Student class to display all details.
   In main function Student class object will be created in this format:
   Student student("Alice", 20, "S12345");
*/  

class Person{
    public:
    string name;
    int age;
};

class Student : public Person{
    int studentId;

    public:
    Student (string StudentName,int Studentage,int id){
        this->name = StudentName;
        this->age = Studentage;
        this->studentId = id;
    }
    void displayStudentInfo(){
        cout << "Name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "Id: " << studentId << endl; 
    }
};

int main(){

    Student student1("osman",23,213);
    student1.displayStudentInfo();

    return 0;
}