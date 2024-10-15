// LCM Calculation in C++
// This file contains two approaches to calculate the LCM of two numbers:
// 1. Brute Force approach
// 2. Optimal approach using GCD

#include <iostream>
using namespace std;

/////////////////////////////////////////////////////
// Brute Force Approach to Calculate LCM
/////////////////////////////////////////////////////

// Function to calculate LCM using brute force
int findLCMBruteForce(int a, int b) {
    // Start from the maximum of the two numbers
    int maxNum = max(a, b);
    int lcm = maxNum;

    // Keep checking if the current number is divisible by both a and b
    while (true) {
        if (lcm % a == 0 && lcm % b == 0) {
            // Return the LCM when it is divisible by both a and b
            return lcm;
        }
        lcm++;  // Increment to check the next number
    }
}

/////////////////////////////////////////////////////
// Optimal Approach to Calculate LCM using GCD
/////////////////////////////////////////////////////

// Function to calculate GCD using the Euclidean algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM using the relation: LCM(a, b) = (a * b) / GCD(a, b)
int findLCMOptimal(int a, int b) {
    // Return the LCM using the formula LCM = (a * b) / GCD(a, b)
    return (a * b) / findGCD(a, b);
}

/////////////////////////////////////////////////////
// Main function to test both approaches
/////////////////////////////////////////////////////

int main() {
    int a = 12, b = 18;
    
    // Testing the brute force approach
    cout << "LCM (Brute Force) of " << a << " and " << b << " is: " << findLCMBruteForce(a, b) << endl;
    
    // Testing the optimal approach using GCD
    cout << "LCM (Optimal) of " << a << " and " << b << " is: " << findLCMOptimal(a, b) << endl;

    return 0;
}
