#include <iostream>
using namespace std;
#include <vector>
#include <climits>

void print(vector<int>arr, int n){ // for printing all arr
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

// Bubble Sorting For 
void BubbleSort(vector<int> arr, int n){
    // [3, 6, 2, 1, 8, 7, 4, 5, 3, 1]
    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(arr[j] > arr[i]){
                swap(arr[j], arr[i]);
            }
        }
    }
    print(arr, n);
}

//Selction Sort 
void SelectionSort(vector<int>arr, int n){
    // [3, 6, 2, 1, 8, 7, 4, 5, 3, 1]
    for(int i=0; i<n-1; i++){
        int minIdx = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
            swap(arr[i], arr[minIdx]);
        }
    }
    print(arr, n);
}

// Insertion Sort 
void InserTionSort(vector<int>arr, int n){
    // [3, 6, 2, 1, 8, 7, 4, 5, 3, 1]
        for(int i=1; i<n; i++){
            int Curr = arr[i];
            int prev = i - 1;
           while(prev >=0 && arr[prev] > Curr){
                swap(arr[prev], arr[prev +1]);
                prev--;
           }
           arr[prev + 1] = Curr;
        }
        print(arr, n);
}

// Counting Sort 
 void CountingSort(vector<int> arr, int n){
    // {3, 6, 2, 1, 8, 7, 4, 5, 3, 1}
    int maxval = INT_MIN;
    int minval = INT_MAX;
    for(int i=0; i<n; i++){
        maxval = max(maxval, arr[i]);
        minval = min(minval, arr[i]);
    }
    vector<int>freq(maxval- minval +1,0);
    for(int i=0; i<n; i++){
        freq[arr[i]- minval]++;
    }
    for(int i=minval, j=0; i<=maxval; i++){
        while(freq[i-minval] > 0){
            arr[j++] = i;
            freq[i -minval]--;
        }
    }
    print(arr, n);
    
    
 }




int main(){
    vector<int> arr = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n  = arr.size();
    
    CountingSort(arr, n);

    return 0;
}