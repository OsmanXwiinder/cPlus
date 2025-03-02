#include <iostream>
using namespace std;

bool search(int matrix[][4], int n,int m, int key){
    if (n <= 0 || m <= 0) {
        cout << "Invalid matrix dimensions.\n";
        return false;
    }
    
    int i=0, j = m-1;
    while (i < n && j >= 0)
    {
        if(matrix[i][j] == key){
            cout << "Key found on (" << i << "," << j <<")\n";
            return true;
        }else if(matrix[i][j] > key){ 
            j--;
        }else{
            i++;
        }
    }
    cout <<" Key not Found\n";
    return false;
    
}

int main(){
    int matrix[4][4] = {{10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,39,50}};
    int n =4; 
    int m =5;
    int key = 35;

    search(matrix, n,m,key);

    return 0;
}