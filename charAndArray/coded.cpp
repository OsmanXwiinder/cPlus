
#include <iostream>
using namespace std;


void check(int one =1, int two =2, int three = 4, int four =3){
  if(one > two){
   cout << "No" << endl;
  }
   if(three > four){
    cout << "No" << endl;
  }
    
  
}

int main() {
     int one = 1, two = 2, three = 4, four =3;
     
check(one,two,three,four);
      
      return 0;
      
}