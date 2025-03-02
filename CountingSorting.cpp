#include <iostream>
using namespace std;
#include <vector>
#include <climits>

void print(vector<int>& arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}


void countingSorting(vector<int>& arr, int n ){

    int minval = INT_MAX, maxval = INT_MIN; // we finding the min value or max value
    for(int i=0; i<n; i++){
        minval = min(minval, arr[i]);
        maxval = max(maxval, arr[i]);
    }
    vector<int>freq(maxval - minval +1, 0);  // 7 -1 +1 --> 7,0 7 is size and first value is zero
    // First step
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
    // 2nd step number frequency updation
    for(int i=minval, j=0; i<=maxval; i++){
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
        }
    }
    print(arr, n);
}

int main(){
    vector <int>arr = {1,4,1,3,2,4,3,7};
    int n = arr.size();

    countingSorting(arr, n);      
    
    return 0;
}