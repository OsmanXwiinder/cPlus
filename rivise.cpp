#include <iostream>
using namespace std;
#include <string>
#include <cstring>




int main(){

    int a = 10;
    int *ptr = &a;
    int **pptr = &ptr;

    cout << *ptr << endl;
    cout << **pptr << endl;


    return 0;
}