#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int target = 10;
    int arr[]  ={2,4,6,8,10,12,14,16};
    int n = 8;
   
    cout << linearSearch(arr, n, target) << endl;

    return 0;
}