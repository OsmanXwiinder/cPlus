#include <iostream>
using namespace std;


void print(int num){
    for(int i=0; i<num; i++){
        cout << "Maila School" << endl;
    }
    
}

int main(){
    int num;
    cout << "Enter a number => " ;
    cin >> num;

    print(num);

    return 0;
}