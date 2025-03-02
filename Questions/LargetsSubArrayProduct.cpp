#include <iostream>
using namespace std;
#include <vector>
#include <climits>


// void maxProductSubarray(vector<int>& nums, int n) {
//     int maxProduct = INT_MIN;

//     for (int i = 0; i < n; i++) {
//         int product = 1;
//         for (int j = i; j < n; j++) {
//             product *= nums[j];
//             maxProduct = max(maxProduct, product);
//         }
//     }
//     cout << "Maximum Product Subarray: " << maxProduct << endl;
// }



void SubArray(vector<int>& nums, int n){
      int  maxproduct = INT_MIN;
    for(int i=0; i<n; i++){
        int product =1;
        for(int j=i; j<n; j++){
            product *= nums[j];
            maxproduct = max(maxproduct, product);
        }
        
       
    }
     cout << "Maximum Product of SubArray: " << maxproduct << endl;
}

int main(){
    vector<int>nums = {2,3,-2,4};
    int n = nums.size();

    SubArray(nums, n);
    return 0;
}