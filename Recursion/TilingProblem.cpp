#include <iostream>
using namespace std;

int TP(int n){ // 2xn
    if(n == 0 || n == 1){
        return 1;
    }

    //vertical
   int ans1 = TP(n-1);

    //horizontal
    int ans2 = TP(n-2);
 
    return ans1+ans2;

}

int main(){
      int n = 3;
      cout << TP(3) << endl;

    return 0;
}