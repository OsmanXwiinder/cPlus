#include <iostream>
using namespace std;

/*
 Write a program to Find Transpose of a Matrix.
What is Transpose?
Transpose of a matrix is the process of swapping the rows to columns. For a 2x3
matrix,
Matrix
a11 a12 a13
a21 a22
a23
Transposed Matrix
a11 a21
a12 a22
a13 a23
*/

void printtranspose(int newmatrix[3][2], int n,int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << newmatrix[i][j] << " " ;
        }
        cout << endl;
    }
}

void transpose(int matrix[2][3], int n, int m){
    int newmatrix[3][2];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            newmatrix[j][i] = matrix[i][j];
        }
    }
    printtranspose(newmatrix,m,n);
}

int main(){
    int matrix[2][3] = {{1,2,3},{4,5,6}};

    int n = 2;
    int m = 3;

    transpose(matrix,n,m);


    return 0;
}