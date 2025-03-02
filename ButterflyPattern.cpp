#include <iostream>
using namespace std;

int main(){
    int n=4;
    // upperpart

    for(int i=0; i<n; i++){
        //numbers
        for(int j=0; j<i+1; j++){
            cout << "*";
        }
        //spaces
        for(int j=0; j< 2*( n-i-1); j++){
            cout << " ";
        }
         for(int j=0; j<i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
    // lowewCase
     for(int i=n-1; i>=0; i--){
        //numbers
        for(int j=0; j<i+1; j++){
            cout << "*";
        }
        //spaces
        for(int j=0; j< 2*( n-i-1); j++){
            cout << " ";
        }
         for(int j=0; j<i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}