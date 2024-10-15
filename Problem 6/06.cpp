#include<bits/stdc++.h>

using namespace std;

// Function to check if a string is a palindrome using brute force method
void BrutePalindrome(string s) {
    string temp = s; // Store the original string for comparison
    reverse(s.begin(), s.end()); // Reverse the string

    // Check if the reversed string is equal to the original string
    if(s == temp) {
        cout << "String " << s << " is Palindrome"; // Output if it is a palindrome
    } else {
        cout << "String " << s << " is not Palindrome"; // Output if it is not a palindrome
    }
}

// Function to check if a string is a palindrome using a better method
void BetterPalindrome(string s) {
    int i = 0, j = s.size() - 1; // Initialize two pointers

    // Loop until the pointers meet in the middle
    while(i <= j) {
        // Check if characters at the two pointers are different
        if(s[i] != s[j]) {
            cout << "String " << s << " is not Palindrome"; // Output if it is not a palindrome
            return; // Exit the function
        }
        i++; // Move the left pointer to the right
        j--; // Move the right pointer to the left
    }
    cout << "String " << s << " is Palindrome"; // Output if it is a palindrome
}
        
int main() {
    string s;
    cout << "Enter the string: "; // Prompt user for input
    cin >> s; // Read the input string
    BrutePalindrome(s); // Call the brute force method to check for palindrome
    return 0; // End the program
}
