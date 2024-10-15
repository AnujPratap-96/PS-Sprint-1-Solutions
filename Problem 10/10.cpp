#include<bits/stdc++.h>

using namespace std;

//? Brute Force Method to Calculate GCD
int BruteGCD(int a, int b) {
    int gcd = 1; // Initialize GCD as 1
    // Loop through all numbers from 1 to the minimum of a and b
    for(int i = 1; i <= min(a, b); i++) {
        // If i divides both a and b, update gcd
        if(a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    return gcd; // Return the calculated GCD
}

//? Better Approach to Calculate GCD
int BetterGCD(int a, int b) {
    int gcd = 1; // Initialize GCD as 1
    // Loop from the minimum of a and b downwards
    for(int i = min(a, b); i >= 1; i--) {
        // If i divides both a and b, set gcd and exit loop
        if(a % i == 0 && b % i == 0) {
            gcd = i;
            break;
        }
    }
    return gcd; // Return the calculated GCD
}

//* Optimal Approach: Using Euclidean Algorithm
int OptimalGCD(int a, int b) {
    // Continue until either a or b becomes 0
    while(a > 0 && b > 0) {
        // Replace larger number with remainder when divided by smaller number
        if(a > b) a = a % b;
        else b = b % a;
    }
    // Return the non-zero value as GCD
    if(a != 0) return a;
    else return b;
}

int main() {
    int a, b;
    cout << "Enter Numbers to Find GCD: "; // Prompt user for input
    cin >> a >> b; // Take inputs for a and b

    // Output GCD using different methods
    cout << "GCD Using Brute Force: " << BruteGCD(a, b) << endl;
    cout << "GCD Using Better Approach: " << BetterGCD(a, b) << endl;
    cout << "GCD Using Optimal Approach: " << OptimalGCD(a, b) << endl;

    return 0; // End the program
}
