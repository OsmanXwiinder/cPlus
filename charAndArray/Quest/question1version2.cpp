#include <iostream>
using namespace std;
#include <string>

/*Count how many times lowercase vowels occurred in a String entered
by the user*/

int modeofvowels(string str){
    string vowels = "aeiou";
    int count = 0;
    for(char ch : str){
        if(vowels.find(str[i])){
            cout << ch << " ";
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