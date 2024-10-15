#include<bits/stdc++.h>  // Includes all standard libraries in C++

using namespace std;

// Function to count vowels and consonants in a given string
void CountVowelAndConsonants(string s){
    int vowel = 0, consonant = 0;  // Initialize counters for vowels and consonants
    
    // Loop through each character of the string
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ') continue;  // Skip spaces in the string
        
        auto ch = s[i];  // Store the current character
        
        // Check if the character is a vowel (considering lowercase vowels only)
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            vowel++;  // Increment vowel counter
        else 
            consonant++;  // Increment consonant counter
    }
    
    // Output the number of vowels and consonants
    cout << "Vowels: " << vowel << " " << "Consonants: " << consonant;
}

int main(){
    string s;  // Declare a string to store user input
    
    // Prompt the user to enter a string
    cout << "Enter a string: ";
    
    // Use getline to capture the entire input including spaces
    getline(cin, s);
    
    // Call the function to count vowels and consonants
    CountVowelAndConsonants(s);
    
    return 0;  // Return 0 to indicate successful execution
}
