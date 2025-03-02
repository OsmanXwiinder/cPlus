#include <iostream>
using namespace std;

/*
 Print out the sum of the numbers in the second row of the “nums” array.
Example :
Input - int nums[ ][ ] = { {1,4,9}, {11,4,3}, {2,2,3} };
Output - 18
*/

int SumOfSpeceficRow(int nums[][3],int rowIndex,int m){
    int *rowPtr = *(nums + rowIndex);  // Get pointer to the desired row
    int sum = 0;

    for (int i = 0; i < m; i++) {  // Iterate through columns
        sum += rowPtr[i];  // Sum up elements of the row
    }

    return sum;  
}

int main(){
    int nums[3][3] = { {1,4,9}, {11,4,3}, {2,2,3} };
    int rowIndex =1;
    int m=3;

   cout << "Sum of Second Row => " << SumOfSpeceficRow(nums, rowIndex,m) << endl;

    return 0;
}