#include <iostream>
using namespace std;
#include <cstring>

bool isPalindrom(char word[],int n){
    int st = 0;
    int end = n-1;
    
    while(st < end){
        if(word[st] != word[end]){
            
            return false;
            cout << "not a palindrom => ";
        }
        st++;
        end--;
    }
    
    return true;
    cout<<"its a palindrom => "; 
}

int main(){
    char word[6] = "madal";
    int n = strlen(word);
    
    cout << boolalpha;
   cout <<  isPalindrom(word,n) << endl;
    return 0;
}