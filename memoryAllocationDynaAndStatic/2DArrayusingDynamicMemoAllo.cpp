#include <iostream>
using namespace std;

int main(){
    int row;
    cin >> row;
    int col;
    cin >> col;

    int **arr = new int *[row]; // this is ptr or total row in matrix
    for(int i=0; i<row; i++){
        arr[i] = new int[col];  //  this is a every row size
    }

    //taking intput
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;
    
    // print 
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }




    return 0;
}