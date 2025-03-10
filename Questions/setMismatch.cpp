#include <iostream>
#include <vector>
using namespace std;

pair<int, int> findDup(vector<int> nums, int n){
    vector<int>Occr(5,0); // extra vector to count occurrence of value in nums vector
    int Duplicate = -1, missing = -1;

    // counting a ocurrence
    for(int i=0; i<n; i++){
        Occr[nums[i]]++;
    }
    for(int i=0; i<n; i++){
        if(Occr[i] == 2) Duplicate = i;
        if(Occr[i] == 0) missing = i;
    }
    return {Duplicate,missing};

}

int main(){
    vector<int>nums = {1,2,2,4};
    int n = nums.size();

 pair<int,int>ans = findDup(nums,n);
  cout<< "{" << ans.first << "," << ans.second << "}" << endl;


    return 0;
}