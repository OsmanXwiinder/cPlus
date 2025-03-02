// #include <iostream>
// using namespace std;

// int UniqeNumber(int arr[], int sz){
//     int uniqueNo =0 ;
//     for(int i=0; i<sz; i++){
//         uniqueNo ^= arr[i];
//     }
//     return uniqueNo;
// }

// int main(){ 
//     int arr[] = {1,2,3,1,2,3,4};
//     int sz = 7;

//     cout << UniqeNumber(arr, sz) << endl;
//     return 0;
// }


#include <iostream>
using namespace std;

int FindUniqeNo(int arr[],int sz){
    for(int i=0; i<sz; i++){
        bool isUniqe = true;
        for(int j=0; j<sz; j++){
            if(i !=j && arr[i] == arr[j]){
                isUniqe = false;
                break;
            }
        }
        if(isUniqe){
            return arr[i];
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,1,2,3,4};
    int sz = 7;
    cout << FindUniqeNo(arr,sz) << endl;

    return 0;
}