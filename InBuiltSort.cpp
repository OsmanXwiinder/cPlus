#include <iostream>
using namespace std;
#include <algorithm> // For sort()

int main(){
    int arr[8] = {2,4,5,7,8,6,4,3};
    int n = sizeof(arr) / sizeof(int);

    sort(arr, arr+8, greater<int>());
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }


    return 0;
}