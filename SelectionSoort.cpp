#include <iostream>
using namespace std;
#include <vector>

void print(vector<int>nums, int n){
    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }
}

void SelectonSort(vector<int>nums, int n){
    for(int i=0; i<n-1; i++){
        int minIdx = i;
        for(int j = i+1; j<n; j++){
            if(nums[j] > nums[minIdx]){
                minIdx = j;
            }
        } 
        swap(nums[i], nums[minIdx]);
    }

    print(nums, n);
}

int main(){
    vector<int>nums = {5,4,1,3,2};
    int n = nums.size();

    SelectonSort(nums, n);

    return 0;
}