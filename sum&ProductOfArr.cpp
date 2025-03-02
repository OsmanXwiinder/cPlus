#include <iostream>
using namespace std;

int Sum(int arr[],int sz){
    int sum =0;
    int product =1;
    for (int i=0; i<sz; i++){
        sum += arr[i];
        product *= arr[i];
    }
    return product;
}


int main(){
    int arr[] = {1,2,3,4,5};
    int sz = 5;
    cout << Sum(arr, sz) << endl;
    return 0;
}