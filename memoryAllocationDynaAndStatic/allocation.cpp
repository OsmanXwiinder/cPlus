#include <iostream>
using namespace std;

void funcInt(){
    int *ptr = new int;
    *ptr = 5;

    cout << *ptr << endl;

    delete ptr;
}

void func(){
    int size;
    cout << "input arr size: ";
    cin >> size;

    int *arr = new int[size];
    cin >> *arr;    

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
}

int main(){
    funcInt();
    func();
    // cout << arr[0] << endl;




   

    return 0;
}