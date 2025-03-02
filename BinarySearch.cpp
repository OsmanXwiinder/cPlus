#include <iostream>
using namespace std;

int binSearch(int *arr, int n, int key){
    int st = 0;
    int en = n-1;
    while(st <= en){
        int mid = (st+en) / 2;
        if(arr[mid] == key){
            return mid; // key found
        }else if(arr[mid] < key){
            st = mid + 1;                // 2nd half search
        }else{
            en = mid -1;
        }
    }   
    return -1;
}

int main(){
    int arr[] = {2,4,6,8,10,12,14,16};
    int n = sizeof(arr) / sizeof(int);
    int key = 33;

    cout << binSearch(arr, n, key);
}