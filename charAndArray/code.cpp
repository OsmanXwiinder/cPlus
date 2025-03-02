#include <iostream>
using namespace std;
#include <string>

int main(){
    // char word[30];
    // cin >> word;

    // cout << "Your word was => " << word << endl;
    // cout << strlen(word) << endl;

    // char sentence[30];
    // cin.getline(sentence,30,'*');

    // cout << "Your Sentence => " << sentence[3] << endl;
    // cout << "Your Sentence length => " << strlen(sentence) << endl;

//    string str;
//     getline(cin,str,'!');

//    cout << str << endl;
    string str = "osman saifi";
    for(char ch:str){
        cout << ch << " ,";
    }
    cout << endl;

    cout << str.at(2) << endl;
    cout << str.substr(2,4) << endl;
    cout << str.find("m") << endl;
    
    return 0;
}