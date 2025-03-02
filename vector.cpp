#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>vec;

     vec.push_back(0);
     vec.push_back(1);
     vec.push_back(2);

     cout << "size- " <<vec.size() << endl;
     cout << "Capacity- " <<vec.capacity()<< endl;

    return 0;
}