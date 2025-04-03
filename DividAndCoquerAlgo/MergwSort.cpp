#include <iostream>
using namespace std;
#include <vector>
 
// merging 
void merge(int arr[], int si, int ei, int mid){
    vector<int> temp;
    int i = si;
    int j = mid+1;

    while (i<=mid && j <= ei)
    {
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i<=mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j<=ei)
    {
        temp.push_back(arr[j]);
        j++;
    }
    int x = 0;
    // vector elements copy to Original Array
    for(int idx = si; idx <= ei; idx++){
       arr[idx] = temp[x];
       x++;
    }

}
    //mergSort --
void MergeSort(int arr[], int si, int ei){

    if(si >= ei){
        return;
    }

    int mid = (si + ei) / 2;

    MergeSort(arr,si, mid);
    MergeSort(arr,mid+1,ei);

    merge(arr, si, ei,mid);

}
        // printing
void Print(int arr[],int n){
    for(int i=0; i<=n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){ 
    int arr[6] = {6,3,7,5,2,4};
    int n = 6;
    MergeSort(arr, 0, n-1);
    Print(arr,n);
    return 0;
}