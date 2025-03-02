#include <iostream>
using namespace std;

void DiognalSum(int matrix[][4], int n, int m){
    int sum =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j){
                sum += matrix[i][j];
            }else if(j == n-i-1){
                sum += matrix[i][j];
            }
        }
    }
    cout << "sum => " << sum << endl;
}

int main(){
    int matrix[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}
                                       };
    int n = 4, m=4;

    DiognalSum(matrix, n,m);

    int matrix1[3][4] = {{1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
                   };
int n1 = 4, m1=4;
DiognalSum(matrix1, n1,m1);
    return 0;
}