#include <iostream>
using namespace std;
#include <string>




    class Teacher{
        public:
        int salary;
        string subject;

    };


    class Student{
        public:
        int rollno;
        float cgpa;
    };

    class TA : public Teacher, public Student{
        public:
        string name;
    };



    int main(){

        TA tea1;
        tea1.name = "osman";
        tea1.subject = "c++";
        tea1.salary = 3000.00;
        tea1.cgpa = 8.7;
        tea1.rollno = 20403434;

        cout << tea1.name << endl;
        cout << tea1.subject << endl;
        cout << tea1.salary << endl;
        cout << tea1.cgpa << endl;
        cout << tea1.rollno << endl;

        return 0;
    }