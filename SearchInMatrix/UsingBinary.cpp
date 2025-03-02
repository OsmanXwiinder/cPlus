#include <iostream>
using namespace std;


bool SearchKey(int matrix[][4], int n, int m,int key){
 
    int start = 0;
    int end = n * m - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        // Convert 1D index to 2D row and column
        int i = mid / m;  // Row index
        int j = mid % m;  // Column index

        if (matrix[i][j] == key) {
            cout << "Element found at (" << i << ", " << j << ")" << endl;
            return true;
        } 
        else if (matrix[i][j] < key) {
            start = mid + 1;  // Move right
        } 
        else {
            end = mid - 1;  // Move left
        }
    }

    cout << "Element not found" << endl;
    return false;
}
    


int main(){ 
    int matrix[4][4] = {{10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,39,50}};
    int n =4; 
    int m =5;
    int key = 33;
    SearchKey(matrix, n,m, key);

     return 0;

}