#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> &arr, int n, int target){
    int st = 0, end = n- 1;
    int CurrSum =0;
    vector<int>ans;
    while(st<end){
        int CurrSum  = arr[st] + arr[end];
        if(CurrSum == target){
           ans.push_back(st);
           ans.push_back(end);
           return ans;
        }else if(CurrSum > target){
            end--;
        }else{
            st++;
        }
    
    }
    return ans;

}
int main(){
    vector<int> arr = {2,7,11,15};
    int n = arr.size();
    int target = 9;

   vector<int>ans = pairSum(arr,n,target);
    
    cout << ans[0] << "," << ans[1] << endl;

    return 0;
}