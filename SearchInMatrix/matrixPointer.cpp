/*
: Print the number of all 7’s that are in the 2d array.
Example :
Input - int arr[ ][ ] = { {4,7,8}, {8,8,7} }; n = 2, m = 3
*/
#include <iostream>
using namespace std;

int SumofOnlySeven(int mat[2][3], int n, int m){

    int key = 7;

    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<m; j++){
            if(mat[i][j] == key){
                count++;
            }
        }
    }
}



int main(){
    int mat[2][3] = { {4,7,8},
                      {8,8,7} };
    int n =2;
    int m=3;

   cout <<  SumofOnlySeven(mat, n,m) << endl;
    return 0;
}