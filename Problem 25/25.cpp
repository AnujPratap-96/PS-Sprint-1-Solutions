#include <bits/stdc++.h> // Include standard libraries

using namespace std;

// Brute Force Method to count the number of digits in a number
int NumberOfDigitsBrute(int n)
{
    int count = 0; // Initialize count to zero
    while (n > 0) // Loop until n becomes zero
    {
        count++; // Increment count for each digit
        n /= 10; // Remove the last digit from n
    }
    return count; // Return the total count of digits
}

// Optimal Method to count the number of digits using logarithm
int NumberOfDigitsOptimal(int n){
    // Calculate the number of digits using log base 10
    // log10(n) gives the highest power of 10 less than n
    // Adding 1 gives the total number of digits
    int count = (int)(log10(n) + 1); 
    return count; // Return the total count of digits
}

int main()
{
    int n; // Variable to store the input number
    cout << "Enter a Number: "; // Prompt user for input
    cin >> n; // Read the number from user input

    // Call and display results for brute force method
    cout << "Number of digits (Brute Force): " << NumberOfDigitsBrute(n) << endl;

    // Call and display results for optimal method
    cout << "Number of digits (Optimal): " << NumberOfDigitsOptimal(n) << endl;

    return 0; // Indicate successful execution
}
