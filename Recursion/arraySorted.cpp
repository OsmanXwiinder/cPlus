#include <iostream>
using namespace std;
#include <vector>

bool isSorted(vector<int> arr,int n,int i){
    if(i == n-1) return true;

    if(arr[i] > arr[i+1]) return false;

        return isSorted(arr,n,i+1);
}

int main(){
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {1,2,5,4,3};

    cout << boolalpha;
   cout << isSorted(arr2,5,0) << endl;


    return 0;
}