#include <bits/stdc++.h>

using namespace std;

//* Brute Force method to find prime numbers in a range
void PrimeInRangeBrute(int n) {
    for (int i = 2; i <= n; i++) { // Iterate from 2 to n
        bool isPrime = true; // Assume i is prime
        for (int j = 2; j <= sqrt(i); j++) { // Check divisibility up to the square root of i
            if (i % j == 0) { // If divisible, i is not prime
                isPrime = false;
                break; // No need to check further
            }
        }
        if (isPrime) { // If prime, print it
            cout << i << " ";
        }
    }
}

//? Optimal method to find prime numbers in a range using the Sieve of Eratosthenes
void PrimeInRangeOptimal(int n) {
    vector<bool> isPrime(n + 1, true); // Initialize a boolean vector to track prime status
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime
    for (int i = 2; i <= sqrt(n); i++) { // Check for primes up to the square root of n
        if (isPrime[i]) { // If i is prime
            for (int j = i * i; j <= n; j += i) { // Mark all multiples of i as non-prime
                isPrime[j] = false;
            }
        }
    }
    for (int i = 0; i <= n; i++) { // Print all prime numbers
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
}

int main() {
    int n;
    cout << "Enter the Range: ";
    cin >> n; // Read the range from user
    PrimeInRangeBrute(n); // Call brute force method
    cout << "\n";
    PrimeInRangeOptimal(n); // Call optimal method
    return 0; // Indicate successful execution
}