#include <iostream>
using namespace std;
#include <vector>

void Findmaxwater(vector<int>nums, int n){
    vector<int>allproduct;
    for(int i=0; i<n; i++){
        int prod =0;
        for(int j=i+1; j<n; j++){
            prod = nums[i] * nums[j];
            allproduct.push_back(prod);
        }
    }
    int TotalWater = 0;
    for(int i=0; i<allproduct.size(); i++){
        cout << allproduct[i] << " ";
        TotalWater += allproduct[i];
    }cout << endl;
    
    cout<< "Total water => " << TotalWater << endl;

    cout << endl;
}

int main(){
    vector<int>nums = {1,2,3,4,5,6,7,2,9};
    int n = nums.size();
    
    Findmaxwater(nums,n);
    
    return 0;
}