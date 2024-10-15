#include<bits/stdc++.h>

using namespace std;

// Function to check if a number is an Armstrong number
void Armstrong(int n) {
    int sum = 0;           // Variable to store the sum of the digits raised to the power of 3
    int temp = n;          // Store the original number for comparison later

    // Loop to extract each digit of the number
    while(n > 0) {
        int res = n % 10;         // Get the last digit of the number
        sum = sum + pow(res, 3); // Add the cube of the digit to the sum
        n = n / 10;               // Remove the last digit from the number
    }
    
    // Check if the original number is equal to the sum of its digits raised to the power of 3
    if(temp == sum) {
        cout << temp << " is an Armstrong number" << endl; // Output if it is an Armstrong number
    } else {
        cout << temp << " is not an Armstrong number" << endl; // Output if it is not an Armstrong number
    }
}

int main() {
    int n;
    cout << "Enter a Number: "; // Prompt user to enter a number
    cin >> n;                   // Read user input
    Armstrong(n);              // Call the Armstrong function to check if the number is an Armstrong number
    return 0;                  // End the program
}
