#include <iostream>
using namespace std;
#include <cstring>

void print(char arr[],int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void SwapValaues(char arr[], int n){
    int st =0;
    int end = n-1;
    while (st<=end)
    {
        swap(arr[st++],arr[end--]);
        // st++;
        // end--;
    }
    print(arr,n);
}

int main(){
    char arr[5] =  "code";
    int n = strlen(arr);

    SwapValaues(arr,n);
  
    return 0;
}