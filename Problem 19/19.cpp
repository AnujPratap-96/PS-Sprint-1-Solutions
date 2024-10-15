#include <bits/stdc++.h>

using namespace std;

//* Brute Force method to find prime numbers in a given range [start, end]
void PrimeInRangeBrute(int start, int end) {
    for (int i = start; i <= end; i++) { // Iterate from start to end
        if (i < 2) continue; // Skip numbers less than 2, as they are not prime
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

//? Optimal method to find prime numbers in a given range [start, end] using the Sieve of Eratosthenes
void PrimeInRangeOptimal(int start, int end) {
    if (end < 2) return; // If end is less than 2, there are no primes

    // Initialize a boolean vector to track prime status
    vector<bool> isPrime(end + 1, true);
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime

    // Sieve of Eratosthenes
    for (int i = 2; i <= sqrt(end); i++) { // Check for primes up to the square root of end
        if (isPrime[i]) { // If i is prime
            for (int j = i * i; j <= end; j += i) { // Mark all multiples of i as non-prime
                isPrime[j] = false;
            }
        }
    }
    
    // Print all prime numbers in the specified range [start, end]
    for (int i = max(start, 2); i <= end; i++) { // Start from max(start, 2) to skip non-primes
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
}

int main() {
    int start, end;
    cout << "Enter the Range (start and end): ";
    cin >> start >> end; // Read the start and end of the range from user
    PrimeInRangeBrute(start, end); // Call brute force method
    cout << "\n";
    PrimeInRangeOptimal(start, end); // Call optimal method
    return 0; // Indicate successful execution
}
