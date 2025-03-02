#include <iostream>
using namespace std;
#include <string>

/*Count how many times lowercase vowels occurred in a String entered
by the user*/

int modeofvowels(string str){
    string vowels = "aeiou";
    int count = 0;
    for(int i=0; i<str.length(); i++){
        if(vowels.find(str[i]) != string::npos ){
            cout << str[i] << " ";
            count++;
        }  
        

    }
    cout << endl;
    return count;
}

int main(){
    string str;
    cout << "Enter string: ";
    cin >> str;

   cout<< "Vowel count: " << modeofvowels(str) << endl;

    return 0;
}