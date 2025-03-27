#include <iostream>
using namespace std;


int sumTon(int n){
    int sum =0; 
    if(n == 1){
        return 1;
    }
    sum = n + sumTon(n-1);

    return sum;
}


int main(){

  int ans =  sumTon(5);
cout << ans << endl;
    return 0;
}