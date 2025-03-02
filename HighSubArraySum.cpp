#include <iostream>
using namespace std;
#include <climits>

void highSubArraySum1(int *arr, int n){
    int maxSum = INT_MIN;
    for(int start=0; start<n; start++){ // this is indexing values this one is starting
            int CurrSum = 0;
        for(int end=start; end<n; end++){ // this is a ending point // end = 2,3,4,5
                CurrSum += arr[end];
             maxSum = max(maxSum, CurrSum); 
        }
    }
    cout << "Max Sum is = " << maxSum << endl;
}

void highSubArraySum2(int *arr, int n){
    int maxSum = INT_MIN;
    int CurrSum = 0;
    for(int i=0; i<n; i++){
        CurrSum += arr[i];
        maxSum = max(maxSum, CurrSum);
        if(CurrSum < 0){
            CurrSum = 0;
        }
    }
    cout << "Max Sum = " << maxSum;
}

int main(){
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    highSubArraySum2(arr, n);

    return 0;
}