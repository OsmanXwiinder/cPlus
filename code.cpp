#include <iostream>
using namespace std;
#include <climits>
int main (){
    int nums[] = {2,3,4,5,6,-13};
    int size =6;
    int index =-1;
     int smallest = INT_MAX;
     for(int i=0; i<size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
            index = i;
        }
     }
     cout << smallest << endl;
     cout << index << endl;
    return 0;
}
