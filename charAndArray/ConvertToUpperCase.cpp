#include <iostream>
using namespace std;
#include <cstring>

void toUpper(char word[], int n){

    for(int i=0; i<n; i++){
        char ch = word[i];
        if(ch >= 'a' && ch <= 'z'){
            continue;
        }else{
            word[i] = ch - 'A' + 'a';
        }
    }
}

int main(){
    char word[] = "ApPle";

toUpper(word, strlen(word));

cout << word << endl;

    return 0;
}