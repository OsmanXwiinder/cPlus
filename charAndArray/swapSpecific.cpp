#include <iostream>
using namespace std;
#include <string>
#include <cstring>


void swapValues(string str1,string str2){
    // int a = str.at()
  
}


int main(){
    string str1;
    cout << "Enter Str1: ";
    cin >> str1;

    string str2;
    cout << "Enter str2: ";
    cin >> str2;


    swap(str1.at(0),str2.at(str2.length() -1));

    cout << str1 << " \n";
    cout << str2 << " \n";



    return 0;
}