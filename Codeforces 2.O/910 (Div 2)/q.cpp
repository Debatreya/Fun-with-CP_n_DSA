#include <string>
#include<bits/stdc++.h>
using namespace std;

string compressedString(string word) {    
    string comp = ""; // Initialize the compressed string
    int n = word.size(); // Length of the input string
    int i = 0; // Current index in the word
    
    while (i < n) {
        char c = word[i]; // Get the current character
        int count = 0;
        
        // Count the maximum number of repeating characters up to 9
        while (count < 9 && (i + count) < n && word[i + count] == c) {
            count++;
        }
        
        // Append the count and character to the compressed string
        comp += to_string(count) + c;
        
        // Move the index forward by the count
        i += count;
    }
    
    return comp;
}

// Example usage
int main() {
    string word = "aaaabbccccaaaabbbbddddeeeeeeeeeeeeeaa";
    string compressed = compressedString(word);
    cout << compressed << endl; // Output: "4a2b4c4a4b4d9e6e2a"
    return 0;
}
