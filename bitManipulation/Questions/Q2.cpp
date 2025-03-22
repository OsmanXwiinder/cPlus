#include <iostream>
using namespace std;
#include <vector>

int singleNumber(vector<int>& nums) {
    int answer = 0;
    for(int i=0; i<nums.size(); i++) {
    answer ^= nums[i];
    }
    return answer;
    }

int main(){
    vector<int>nums = {2,2,1};
    cout << singleNumber(nums) <<endl;

    return 0;
}