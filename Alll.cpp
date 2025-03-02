#include <iostream>
using namespace std;


int main(){
    int a = 5;
    int *ptr1 = &a;
    int *ptr2 = ptr1 + 3;

    cout << ptr2 - ptr1 << "\n";
    cout << ptr2 << "\n";
    cout << ptr1 << "\n";
    return 0;   
}