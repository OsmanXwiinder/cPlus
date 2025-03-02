#include <iostream>
using namespace std;
#include <vector>

void print(vector<int>& nums, int n){
    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }
}

void InsertionSorting(vector<int>& nums, int n){

    for(int i=1; i<n; i++){
        int Curr = nums[i]; // current element
        int prev = i-1; // sorted

        while(prev >=0 && nums[prev] < Curr){
            swap(nums[prev], nums[prev+1]); //swap prev to curr
            prev--;
        }
        nums[prev +1] = Curr; // curr update to prev +1 -----> 
    }
    print(nums, n);
}



int main(){
    vector<int>nums = {5,4,1,3,2};
    int n = nums.size();

    InsertionSorting(nums, n);

    return 0;
}