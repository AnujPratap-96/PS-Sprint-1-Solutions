#include <bits/stdc++.h>

using namespace std;

// Function to print Fibonacci sequence up to a given limit n
void Fibonacci(int n) {
    // Check if the limit is 0
    if (n == 0) {
        cout << "No Number is in the Sequence"; // Print message if no numbers are in the sequence
        return; // Exit the function
    }

    int a = 0, b = 1; // Initialize the first two numbers of the Fibonacci sequence
    cout << a << " " << b << " "; // Print the first two numbers

    // Infinite loop to generate the Fibonacci sequence
    while (1) {
        int temp = a + b; // Calculate the next Fibonacci number
        a = b;            // Update a to the previous b
        b = temp;        // Update b to the newly calculated Fibonacci number

        // Check if the new Fibonacci number is less than or equal to the limit
        if (b <= n) {
            cout << b << " "; // Print the Fibonacci number if it's within the limit
        } else {
            break; // Exit the loop if the Fibonacci number exceeds the limit
        }
    }
}

int main() {
    int n;
    cout << "Enter the limit up to you want in the Fibonacci sequence: "; // Prompt user for input
    cin >> n; // Read the limit value from the user
    Fibonacci(n); // Call the Fibonacci function to generate the sequence up to the given limit
    return 0; // End the program
}
