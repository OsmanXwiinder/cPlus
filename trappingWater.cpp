#include <iostream>
using namespace std;
#include <vector>


int MaxTrappingWater( vector<int> height, int n){
        vector<int> leftmax(n), rightmax(n);
        leftmax[0] = height[0];
        rightmax[n - 1] = 0;  

      
        for(int i=1; i<n; i++){           // leftmax bar for leftside
            leftmax[i] = max(leftmax[i-1], height[i]);
            // cout << leftmax[i] << ",";
        }
        for(int i=n-2; i>=0; i--){           // leftmax bar for leftside
            rightmax[i] = max(rightmax[i+1],height[i+1]);
            // cout << rightmax[i] << ",";
        }
          // cout<< rightmax[n-1];
          int waterTrapped = 0;
          for(int i=0; i<n; i++){
              int currWater = min(leftmax[i], rightmax[i]) - height[i];
              if(currWater > 0){
                waterTrapped += currWater;
              }
          }
            // cout<< "total max water = " << waterTrapped << endl;
            return waterTrapped;
}       

int main(){
    vector<int>height = {4,2,0,6,3,2,5};
    int n = height.size();

 cout << "Water = " << MaxTrappingWater(height, n) << endl;
    return 0;
}