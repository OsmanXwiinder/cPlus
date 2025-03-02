#include <iostream>
using namespace std;

int Intersection(int arr[],int  Arr[], int sz, int Sz){
    bool comman = false;
        for(int i=0; i<sz; i++){
        for(int j=0; j<Sz; j++){
            if(arr[i] == Arr[j]){
                cout << arr[i] << " ";
                comman = true;
                break;
            }
        }
        if(!comman){
            cout << "No InterSection";
        }
    }
    cout << endl;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int Arr[] = {6,7,3,1};
    int sz = 5;
    int Sz = 4;
    Intersection(arr,Arr,sz,Sz);
    return 0;
}