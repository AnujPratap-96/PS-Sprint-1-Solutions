#include<bits/stdc++.h>

using namespace std;

// Function to calculate the sum of digits of a number
int sumofDigits(int n) {
    int sum = 0; // Initialize the sum variable to 0
    // Loop until the number is greater than 0
    while(n > 0) {
        // Add the last digit of n to sum
        sum += n % 10;
        // Remove the last digit from n
        n /= 10;
    }
    return sum; // Return the calculated sum of digits
}
        
int main() {
    int n;
    cout << "Enter a Number to find sum of digits: "; // Prompt user for input
    cin >> n; // Read the input number
    // Output the sum of digits by calling the sumofDigits function
    cout << "Sum of Digits of " << n << " is " << sumofDigits(n) << endl;
    return 0; // End the program
}
