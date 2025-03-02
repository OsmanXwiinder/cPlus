#include <iostream>
using namespace std;


int SearchKey(int matrix[][4], int n, int m){
    int key = 33;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(key == matrix[i][j]){
                cout << "Index =>" << i << "," << j ;
            }
        }
    }
    return -1;
}

int main(){ 
    int matrix[4][4] = {{10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,39,50}};
    int n =4; 
    int m =5;

    SearchKey(matrix, n,m);

     return 0;

}