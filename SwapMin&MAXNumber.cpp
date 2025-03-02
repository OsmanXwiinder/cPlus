#include <iostream>
using namespace std;
#include <limits.h>

int SwapMinAndMax(int arr[], int sz){
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallestindex = -1;
    int largestindex = -1;
    for(int i=0; i<sz; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            smallestindex = i;
        }
         if(arr[i] > largest){
            largest = arr[i];
            largestindex = i;
        }
        if(smallestindex != -1 && largestindex != -1){
            swap(arr[smallestindex], arr[largestindex]);,
        }
    }
}

int main(){
    int arr[] = {-1,2,3,4,6};
    int sz =5;
    SwapMinAndMax(arr,sz);
    for(int i=0; i<sz; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}