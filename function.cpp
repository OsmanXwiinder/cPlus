
#include <iostream>
using namespace std;

int facto(int n){
   int fac =1;
   for(int i=1; i<=n; i++){
    fac *=i;
   }
   return fac;
}
int nCr(int n, int r){
    int fact_n = facto(n);
    int fact_r = facto(r);
    int fact_n_r = facto(n-r);

    return fact_n/(fact_r*fact_n_r);
}

int main(){
    int n =8, r =2;
  cout <<  nCr(n,r);
    return 0;
}


