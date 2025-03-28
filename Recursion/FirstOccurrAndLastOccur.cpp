#include <iostream>
using namespace std;
#include <vector>


// first Occrurrnce
int First_occur(vector<int>arr,int i, int target){
    if(i == arr.size()){    // base case
        return -1;
    }

    if(arr[i] == target){    // first We are Checking for current Idnex
        return i;
    }
     return First_occur(arr,i+1,target);  // then For Next
}

// last Occurrence
int Last_Occur(vector<int>arr,int i,int target){
    if(i == arr.size()) return -1;  // Base Case

    int idxFound = Last_Occur(arr, i+1, target);    // First we are checked for next
 
     if(idxFound == -1 && arr[i] == target){   // if we found -1 for next then check for current
            return i;   // and return
    }
    return idxFound;  // else we are returning idxfound during next checking

}

int main(){
    vector<int> arr = {1,2,3,3,3,4};

    cout << First_occur(arr,0,3) << endl;
    cout << Last_Occur(arr,0,3);
    return 0;
}