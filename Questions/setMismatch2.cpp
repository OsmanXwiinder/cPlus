#include <iostream>
#include <vector>
using namespace std;

pair<int,int> MissAndDuplicate(vector<int>nums,int n){
    int Dup = -1,missing = -1; // for 

    // duplicat number
    for(int i=0; i<n; i++){
        if(nums[abs(nums[i])-1] < 0){
            Dup = abs(nums[i]);
        }else{
            nums[abs(nums[i])-1] *= -1;
        }
    }

    // jo kabhi minus nhi ban paya
    for(int i=0; i<n; i++){
        if(nums[i] > 0){
            missing = i +1;
            break;
        }
    }
    return {Dup,missing};
}

int main(){
    vector<int>nums = {1,2,3,3};
    int n = nums.size();

  pair<int,int>ans = MissAndDuplicate(nums,n);

    cout << "Duplicate: " << ans.first << endl;
    cout << "Missing: " << ans.second << endl; 

    return 0;
}