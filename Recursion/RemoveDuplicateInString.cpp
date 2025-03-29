#include <iostream>
using namespace std;
#include <string>


void removeDuplicate(string str,string ans,int i,int map[26]){
    // base case
    if(i == str.size()){
        cout << "non-Duplicate Str: " << ans << endl;
    }


    // char ch = str[i];
    int mapIdx = (int)(str[i] - 'a');

    if(map[mapIdx]){   // if its true
        removeDuplicate(str,ans,i+1,map);
    }else{ // false => Exist nhi karta
        map[mapIdx] = true;
        removeDuplicate(str,ans+str[i], i+1, map);
    }

}


int main(){
    string str = "ossmann";
    string ans = "";
    int map[26] = {false};

    removeDuplicate(str,ans,0,map);
    return 0;
}