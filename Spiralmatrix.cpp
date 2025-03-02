#include <iostream>
using namespace std;

void spiralMatrix(int matrix[][4], int n, int m){
    int Srow = 0;
    int Scol = 0;
    int Erow = n-1;
    int Ecol = m-1;

    while (Srow <= Erow && Scol <= Ecol)
    {
          //top
    for(int j=Scol; j<=Ecol; j++){
        cout << matrix[Srow][j] << " ";
    }
    //right 
    for(int i=Srow+1; i<=Erow; i++){
        cout << matrix[i][Ecol] << " ";
    }
    //bottom
    for(int j=Ecol -1; j>=Scol; j--){
        if(Srow == Erow){
            break;
        }
        cout << matrix[Erow][j] << " ";
    }
    //left   
    for(int i=Erow -1; i >= Srow +1; i--){
        if(Scol == Ecol){
            break;
        }
        cout << matrix[i][Scol] << " "; 
    }
        Srow++;
        Scol++;
        Erow--;
        Ecol--;

    }
    cout << endl;
  
}

int main(){
    int matrix[4][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};
    int n =4, m=4;

    spiralMatrix(matrix, n,m);

    int matrix2[5][4] = {{1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16},
    {17,18,19,20}
};
     int n1 =5, m1=4;

     spiralMatrix(matrix2, n1,m1);

    return 0;
}