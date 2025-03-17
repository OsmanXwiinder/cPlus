#include <iostream>
using namespace std;
#include <vector>

// JOD win

int findIndex(vector<int>bits){
    int n = bits.size();
    cout << n << endl;
    int index;
   
    for(int i=n-1; i >= 0; i--){
        for(int j=0; j<n; j++){
            if(bits[j+2] == 1){
                index = bits[j+1];
            }
        }
    }
    return index;
}
  
void myswap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swapping(vector<int> &bits){
    int n = bits.size();
    for(int i=0; i<n; i++){
       for(int j=0; j<n-i-1; j++){
            myswap(&bits[j], &bits[j+1]);
       } 
    }
}
vector<int> intoBits(int num){
    vector<int> bits;
    while (num > 0)
    {
        bits.push_back(num%2);
        num /= 2;
    }
    swapping(bits);
     return bits;
     
}


int main(){ 
    int num = 6;

    vector<int>bits = intoBits(num);

    cout << "binary values =";
    for(int i=0; i<bits.size(); i++){    // convering to bonary 
        cout << bits[i] << " ";
    }
    cout << endl;


    int index = findIndex(bits);   // in this function finding a value on index 2
    cout << "on 2nd index value is=> " << index << endl;
    return 0;
}