#include <iostream>
using namespace std;

/*
You are given a 0-indexed 1-dimensional (1D) integer array original, and two integers, m and n. You are tasked with creating a 2-dimensional (2D) array with  m rows and n columns using all the elements from original.

The elements from indices 0 to n - 1 (inclusive) of original should form the first row of the constructed 2D array, the elements from indices n to 2 * n - 1 (inclusive) should form the second row of the constructed 2D array, and so on.

Return an m x n 2D array constructed according to the above procedure, or an empty 2D array if it is impossible.

i is the index in the 1D array.
row = i / cols gives the row index in 2D.
col = i % cols gives the column index in 2D.

*/
void print2DArray(int matrix[][2], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void convert1DTo2D(int arr[], int rows, int cols, int matrix[][2]){
    for(int i=0; i<rows*cols; i++){
        int row = i / cols;
        int col = i % cols;
        matrix[row][col] = arr[i];
    }
    
}



int main(){
    int arr[] = {1,2,3,4,5,6};
    int rows = 3;
    int cols = 2;
    int matrix[3][2];

    convert1DTo2D(arr, rows, cols ,matrix);

    print2DArray(matrix, rows,cols);
    return 0;
}