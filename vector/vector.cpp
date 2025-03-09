#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> vec2 = {1,2,3,4,5}; //Creates a vector with values {1,2,3,4,5}

    cout << "size =>" << vec2.size() << endl;
    cout << " capacity => " << vec2.capacity() << endl; // 5

    vec2.push_back(6); // now 6 element in vetor

    cout << "size =>" << vec2.size() << endl;
    cout << " capacity => " << vec2.capacity() << endl; // capacity now : double 10

    vec2.pop_back();

    cout << "size =>" << vec2.size() << endl;
    cout << " capacity => " << vec2.capacity() << endl; 

    return 0;
}