#include <iostream>
using namespace std;

int printArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << ", " ;
    }
}

int main(){
    int arr[] = {5,4,3,9,2};
    int n = sizeof(arr) / sizeof(int);
    int st =0 ;
    int ed = n-1;

    while(st < ed){
        int temp = arr[st];
        arr[st] = arr[ed];
        arr[ed]= temp;
        st++;  
        ed--;
    }

    printArr(arr, n);

    return 0;
    }