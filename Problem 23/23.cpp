#include <iostream>
using namespace std;

// Recursive method to find Fibonacci number (inefficient for large n)
int FibonacciRecursive(int n) {
    if (n <= 1) {
        return n;  // Base case: F(0) = 0, F(1) = 1
    }
    return FibonacciRecursive(n - 1) + FibonacciRecursive(n - 2); // Recursive calls
}

// Iterative method to find Fibonacci number (efficient)
int FibonacciIterative(int n) {
    if (n <= 1) {
        return n;  // Base case: F(0) = 0, F(1) = 1
    }

    int a = 0, b = 1;  // Initial Fibonacci numbers
    int fib = 0;       // Variable to hold the Fibonacci number

    // Loop to calculate Fibonacci number
    for (int i = 2; i <= n; i++) {
        fib = a + b;  // F(n) = F(n-1) + F(n-2)
        a = b;        // Update F(n-2) to F(n-1)
        b = fib;      // Update F(n-1) to F(n)
    }
    return fib;  // Return the Fibonacci number at position n
}

int main() {
    int n;  // Position to find Fibonacci number
    cout << "Enter the position of the Fibonacci number: ";
    cin >> n;

    // Using the recursive method (not recommended for large n)
    cout << "Fibonacci number at position " << n << " (Recursive): " << FibonacciRecursive(n) << endl;

    // Using the iterative method
    cout << "Fibonacci number at position " << n << " (Iterative): " << FibonacciIterative(n) << endl;

    return 0; // Indicate successful execution
}
