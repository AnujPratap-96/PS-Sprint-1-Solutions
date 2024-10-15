#include<bits/stdc++.h>

using namespace std;

// Function to print a pyramid pattern
void Pyramid(int n) {
    // Loop through each level of the pyramid
    for (int i = 0; i < n; i++) {
        // Print spaces to center align the pyramid
        for (int j = 0; j < n - i - 1; j++) {
            cout << " "; // Print space before the stars
        }
        // Print stars for the current level
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*"; // Print stars in increasing order
        }
        cout << endl; // Move to the next line after each level
    }
}
        
int main() {
    int n;
    cout << "Enter the Height of the Pyramid: "; // Prompt user for input
    cin >> n; // Read the height of the pyramid
    Pyramid(n); // Call the function to print the pyramid pattern
    return 0; // End the program
}
