#include <iostream>
using namespace std;

const int N =3;

void printmatrix(int matrix[][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void RotateOn90Degree(int matrix[][N]){
    int temp[N][N];

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            temp[j][N-1-i] = matrix[i][j];
        }
    }
    
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            matrix[i][j] = temp[i][j];
        }
    }

}

int main(){
    int matrix[N][N] = {{1,2,3},{4,5,6},{7,8,9}};

    cout << "Before the Rotate =>" << endl;
    printmatrix(matrix);

   
    RotateOn90Degree(matrix);

    cout << "after the Rotate =>" << endl;
    printmatrix(matrix);

    return 0;
}