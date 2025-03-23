#include <iostream>
using namespace std;
#include <string>

class Car
    
{
private:
    string name;
    string color;

public:
    Car(){
        // Created constructor // same name as class name
    }
    void getPercentage()
    {
        cout << (cgpa * 10) << "% \n";
    }

    // setters
    void setName(string nameVal)
    {
        name = nameVal;
    }
    void setCgpa(float cgpaVal)
    {
        cgpa = cgpaVal;
    }

    // Getters
    string getName()
    {
        return name;
    }
    float getCgpa()
    {
        return cgpa;
    }

protected:
};
int main()
{
    Student s1;
    s1.setName("osman");
    s1.setCgpa(6.9);
    cout << s1.getName() << endl;
    cout << s1.getCgpa() << endl;
    s1.getPercentage();
    return 0;
}
