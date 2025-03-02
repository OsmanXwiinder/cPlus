#include <iostream>
#include <string>
using namespace std;
#include <algorithm>

bool CloseString(string word1, string word2) {
    if (word1.length() != word2.length()) return false;

        int ca1[26] = {0};
        int ca2[26] = {0};

        // Count character frequencies
        for (int i = 0; i < word1.length(); i++) {
            ca1[word1[i] - 'a']++;
            ca2[word2[i] - 'a']++;
        }

        // Check if both words use the same characters
        for (int i = 0; i < 26; i++) {
            if ((ca1[i] > 0) != (ca2[i] > 0)) return false;
        }

        // Sort frequency arrays
        std::sort(ca1, ca1 + 26);
        std::sort(ca2, ca2 + 26);

        // Compare frequency arrays
        return std::equal(ca1, ca1 + 26, ca2);
}

int main(){ 
    string word1 = "abc", word2 = "abc";
    cout << boolalpha;
   cout << CloseString(word1,word2) << endl;
    return 0;
}