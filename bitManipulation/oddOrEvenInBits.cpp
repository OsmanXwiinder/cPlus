#include <iostream>
using namespace std;
#include <vector>

//  int ChnageIntoBit(int num){
//      if(num == 0) return;

//      vector<int> bits;

//      while (num > 0)
//      {  
//         bits.push_back(num % 2);
//         num /= 10;
//      }
//      return bits;

     
// }

bool oddOrEven(int num){
    if(!(num & 1)){
        return true;
    }else{
        return false;
    }
}

int main(){
    int num = 15;
    cout << boolalpha;
   cout << oddOrEven(num) << endl;



    return 0;
}