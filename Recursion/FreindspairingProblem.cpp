#include <iostream>
using namespace std;


int FreindsPairing(int n){
    // here is n = is ways if n-> 1 so return s1 way and if 2 so return 2;
    if(n == 1 || n == 2){   
        return n;
    }

    // single
   int single = FreindsPairing(n-1);
    //pair 
   int pair = (n-1) * FreindsPairing(n-2);

   return single+pair;
}

int main(){
     int ans = FreindsPairing(3);
    cout << ans << endl;
    return 0;
}