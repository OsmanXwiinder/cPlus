#include <iostream>
using namespace std;
#include <vector>

int UsingbinarySearch(vector<int>nums, int n, int target){
    int st = 0, end = n-1;

    while(st <= end){
        int mid = st + (end- st) / 2;
        if(nums[mid] == target){
            return mid;
        }
        if(nums[st] <= nums[mid]){ // letf sorted
            if(nums[st] <= target && target <= nums[mid]){ // go to left
                end = mid -1;
            }else{ // go to right
                st = mid +1;
            }
        }else{ // right sorted
            if(nums[mid] <= target && target <= nums[end]){
                st = mid +1;
            }else{
                end = mid-1;
            }
            return nums[mid];
        }

    }
    return -1;

}

int main(){ // ---> O(n) time complexity
    vector<int> nums = {3,4,5,6,7,0,1,2};
    int n = nums.size();
    int target = 0;
    cout << "index => " << UsingbinarySearch(nums,n,target) << endl;
    return 0;
}