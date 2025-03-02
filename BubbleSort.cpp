#include <iostream>
using namespace std;
#include <vector>



void PrintArray(vector<int>nums, int n){
    for(int i=0; i<n; i++){
        cout << nums[i] << ", ";
    }
    cout << endl;
}

void bubbleSort(vector<int>nums, int n){
    for(int i=0; i<n-1; i++){
        bool isSwape = false;
        for(int j=0; j<n-i-1; j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j], nums[j+1]);
                isSwape = true;
            }
        }
        if(!isSwape){
            return;
        }
    }
    PrintArray(nums, n);     
}

int main(){
    vector<int>nums = {1,2,3,4,5,6,7,8,9,10};
    int n = nums.size();

    bubbleSort(nums, n);

}

