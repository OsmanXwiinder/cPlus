#include <iostream>
using namespace std;

int DectoBinary(int n){
    int ans = 0, pow =1;

    while(n > 0){
        int rem = n % 2;
        n = n /2;
        ans += (rem*pow);  
        pow = pow *10; // updating A power for each 
    }
    return ans;
}


int main(){
    int n =45;
    // cout << DectoBinary(n) << endl;
    for(int i=0; i<=10; i++){
        cout << DectoBinary(i) << endl;
    }

    return 0;
}