#include <iostream>
using namespace std;
#include <vector>
#include <set>
/*
        3SUM 
Given an integer array nums, return all the triplets [nums[i], nums[j],
nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets. [ Go to Qs ]
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation:
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0. The
distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
Input: nums = [0,1,1] Output:
[ ]
Explanation: The only possible triplet does not sum up to 0.
*/

// to find all the tripltes first : you can use tuple or 2d vector

// tuple<int,int,int> tripletsValues(vector<int> &nums, int n){
//     vector<vector<int>> ans;
   

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             for(int k=j+1; k<n; k++){
//                 if(nums[i] + nums[j] + nums[k] == 0){
//                     ans.push_back(i);
//                     ans.push_back(j);
//                     ans.push_back(k);
//                 }
//             }
//         }
//     }
//     return ans;
// }


// void tripletsValues3(vector<int> &nums, int n){
//     vector<vector<int>> ans;

    
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             for(int k=j+1; k<n; k++){
//                 if(nums[i] + nums[j] + nums[k] == 0){
//                     ans.push_back(i);
//                     ans.push_back(j);
//                     ans.push_back(k);
//                 }
//             }
//         }
//     }
    
//     for(int i=0; i<n; i++){
//         cout << ans[i] << " ";
//     }
//     cout << endl;
// } 

void printSorted(vector<int> &trip){
    int n = 3;
    for(int i=0; i<n; i++){
        cout << "This is Sorted array => " << trip[i] << " ";
    }
    cout << endl;
}

void myswap(int *a, int *b){  // swapping using by own
    int temp = *a;
    *a = *b;
    *b = temp;
}

void mysort(vector<int> &trip){  // sorting using bubble sort my in built functions
    int n = trip.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(trip[j] > trip[j+1])
            myswap(&trip[j],&trip[j+1]);
        }
    }
    printSorted(trip);
}

vector<vector<int>> tripletsValues2(vector<int> &nums, int n){
    vector<vector<int>> ans;
    set<vector<int>> s; // set<uniqueTriplets>

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(nums[i] + nums[j] + nums[k] == 0){
                    vector<int> trip = {nums[i], nums[j], nums[k]};  
                    mysort(trip);
                    if(s.find(trip)  == s.end()){
                        s.insert(trip);
                        ans.push_back(trip);
                    }
                }
            }
        }
    }
    return ans;
}


int main(){
     vector<int> nums = {-1,0,1,2,-1,-4};
    int n = nums.size();
    
    tripletsValues2(nums,n);

    return 0;
}