#include <iostream>
using namespace std;
#include <limits.h>
int main(){
    int n =5;
    int arr[5] = {1,2,3,4,5};

    int maxSum =INT_MIN;
    for(int start=0; start<n; start++){
        int currentSum =0;
        for(int end=start; end<n; end++){
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }
    cout << maxSum << endl;
    return 0;
}