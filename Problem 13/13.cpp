#include<bits/stdc++.h>  // Includes all standard libraries in C++

using namespace std;

// Brute Force Approach: Function to reverse a given string by creating a new string
void ReverseBrute(string s) {
    string reversed = "";  // Declare a new string to store the reversed characters
    
    // Loop through the original string from the end to the beginning
    for(int i = s.size() - 1; i >= 0; i--) {
        reversed += s[i];  // Append each character to the new string
    }
    
    // Output the reversed string
    cout << "Reversed String (Brute Force) is: " << reversed << endl;
}

// Optimal Approach: Function to reverse a given string in place using two pointers
void ReverseOptimal(string s) {
    int i = 0, j = s.size() - 1;  // Initialize two pointers: one at the start and one at the end of the string
    
    // Loop to swap characters from both ends of the string until the pointers meet in the middle
    while(i < j) {
        swap(s[i], s[j]);  // Swap the characters at positions i and j
        i++;  // Move the left pointer to the right
        j--;  // Move the right pointer to the left
    }
    
    // Output the reversed string
    cout << "Reversed String (Optimal) is: " << s << endl;
}

int main() {
    string s;  // Declare a string to store user input
    
    // Prompt the user to enter a string
    cout << "Enter a String: ";
    cin >> s;  // Read input from the user
    
    // Output the original string
    cout << "Original String: " << s << endl;
    
    // Call the brute force reverse function
    ReverseBrute(s);
    
    // Call the optimal reverse function
    ReverseOptimal(s);
    
    return 0;  // Return 0 to indicate successful execution
}
