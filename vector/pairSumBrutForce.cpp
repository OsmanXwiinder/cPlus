#include <iostream>
#include <vector>
using namespace std;

void pairSum(vector<int> &arr, int n, int target,int &index1, int &index2){
 

    for(int i=0; i<n; i++){
        for(int j= i+1; j<n; j++){

            if(arr[i]+arr[j] == target){
              index1 = i;
              index2 = j;
              return;
            }
        }
    }
    index1 = -1;
    index2 = -1;
}
int main(){
    vector<int> arr = {2,7,11,15};
    int n = arr.size();
    int target = 9;

    int index1, index2;

    pairSum(arr,n,target,index1,index2);
    
    if(index1 != -1){
        cout << "Pair Found at indexes => " << index1 << "," << index2 << endl;
    }else{
        cout << "not found" << endl;
    }

    return 0;
}