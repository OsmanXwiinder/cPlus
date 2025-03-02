/*
Given an integer array nums, return true if any value appears at least
twice in the array, and return false if every element is distinct
*/

#include <iostream>
using namespace std;

bool checkDuplicate(int *nums, int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i] == nums[j]){
                return true; // if equals 
            }
        }
    }
    return false; // if not 
}

int main(){
    int nums[] = {1,1,1,3,3,4,3,2,4,2};
    int n = sizeof(nums) / sizeof(int);

//   cout << checkDuplicate(nums,n) << endl;
   if (checkDuplicate(nums, n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}