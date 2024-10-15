#include <bits/stdc++.h>

using namespace std;

//* Brute Force method to check if a number is a Perfect Number
bool PerfectNumberBrute(int n) {
    int sum = 0; // Initialize sum of divisors
    for (int i = 1; i < n; i++) { // Iterate from 1 to n-1
        if (n % i == 0) { // If i is a divisor of n
            sum += i; // Add i to sum
        }
    }
    // A number is perfect if the sum of its divisors equals the number
    return sum == n && n != 0; 
}

//? Optimal method to check if a number is a Perfect Number
bool PerfectNumberOptimal(int n) {
    int sum = 0; // Initialize sum of divisors
    for (int i = 1; i * i <= n; i++) { // Iterate from 1 to sqrt(n)
        if (n % i == 0) { // If i is a divisor of n
            sum += i; // Add i to sum
            if ((n / i) != i && (n / i) != n) { 
                // Add the corresponding divisor n/i if it's not the same as i and not n
                sum += n / i; 
            }
        }
    }
    // A number is perfect if the sum of its divisors equals the number
    return sum == n && n != 0; 
}

int main() {
    int n;
    cout << "Enter a Number to Check: ";
    cin >> n; // Read the number from user

    // Check if the number is perfect using both methods
    if (PerfectNumberBrute(n))
        cout << n << " is a Perfect Number (Brute Force Method)";
    else
        cout << n << " is not a Perfect Number (Brute Force Method)";

    cout << "\n";

    if (PerfectNumberOptimal(n))
        cout << n << " is a Perfect Number (Optimal Method)";
    else
        cout << n << " is not a Perfect Number (Optimal Method)";

    return 0; // Indicate successful execution
}
