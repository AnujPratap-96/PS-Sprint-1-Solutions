#include<bits/stdc++.h>

using namespace std;

// Function to calculate factorial using recursion
long long factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if(n == 0 || n == 1) return 1;
    
    // Recursive case: n * factorial of (n-1)
    return n * factorial(n - 1);
}

// Function to calculate factorial using iteration
long long Factorial(int n) {
    long long fact = 1; // Initialize factorial result to 1
    // Loop from n down to 1
    for(int i = n; i >= 1; i--) {
        fact *= i; // Multiply current i to the factorial result
    }
    return fact; // Return the calculated factorial
}
        
int main() {
    int n;
    cout << "Enter a Number to find factorial: "; // Prompt user for input
    cin >> n; // Read the input number

    // Using Iteration to calculate factorial
    cout << "Factorial of " << n << " is " << Factorial(n) << endl;

    // Using Recursion to calculate factorial
    cout << "Factorial of " << n << " is " << factorial(n) << endl;

    return 0; // End the program
}
