#include <iostream>
using namespace std;
#include <vector>
#include <climits>
#include <limits>


int TotalWaterInContainers(vector<int>height, int n)
{
     // this is for left max

    vector<int> leftMax(20000);
    leftMax[0] = height[0];
    cout << leftMax[0] << ",";
    for(int i=1; i<n; i++){
        leftMax[i]  = max(leftMax[i-1] , height[i-1]); // 
        cout << leftMax[i] << " ";
    }
    cout << endl;

    // this is for rightmax

    vector<int> rightMax(20000);
   
    rightMax[n-1] = height[n-1];
    for(int i=n-2; i >= 0; i--){
        rightMax[i] = max(rightMax[i+1] , height[i+1]);
        cout << rightMax[i] << " ";
    } 
    cout << endl;
    
    int WaterTrapped = 0;
    for(int i=0; i<n; i++){
        int CurrentWater = min(leftMax[i], rightMax[i]) - height[i];
        if(CurrentWater > 0){
            WaterTrapped += CurrentWater;
        }
        
    }
    cout << "WaterTrapped : " << WaterTrapped << endl;

    return WaterTrapped;
}

int main(){
    vector<int>height = {4,2,0,6,3,2,5};
    int n = height.size();

    TotalWaterInContainers(height, n);

    return 0;
}