#include <iostream>
using namespace std;
 #include <algorithm> 

void QS(int arr[], int si,int ei){
    if(si >= ei){
        return;
    } 

    int pivoteIdx = partition(arr,si,ei);

    QS(arr,si,pivoteIdx-1);  // left Half
    QS(arr,pivoteIdx+1,ei);  // right half



}

int partition(int arr[],int si,int ei){
    int i=si-1; 
    int pivot = arr[ei];
    for(int j=si; j<ei; j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[ei]); // pivoteIdx = ei;

    return i;
}

void printArr(int arr[],int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[6] = {3,2,5,6,7,4};
    int n = 6;
    QS(arr,0,n-1);
    printArr(arr,n);

    return 0;
}