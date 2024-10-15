#include<bits/stdc++.h>
          
using namespace std;

//? Brute Force --> Method to check if a number is prime using brute force
void BrutePrime(int n) {
    int count = 0; // Variable to count the number of divisors
    for(int i = 1; i <= n; i++) { // Loop through all numbers from 1 to n
        if(n % i == 0) count++; // Increment count if i is a divisor of n
    }
    // If the number has exactly two divisors (1 and itself), it's prime
    if(count == 2) cout << "Number is Prime";
    else cout << "Number is not Prime";
}

//? Optimized Method --> Improved way to check if a number is prime using square root approach
void BetterPrime(int n) {
    int count = 0; // Variable to count the number of divisors
    for(int i = 1; i * i <= n; i++) { // Loop from 1 to sqrt(n) to check divisors
        if(n % i == 0) { // If i is a divisor of n
            count++; // Increment count for divisor
            if(n / i != i) count++; // If i is not equal to n/i, increment count for n/i
        }
    }
    // If the number has exactly two divisors (1 and itself), it's prime
    if(count == 2) cout << "Number is Prime";
    else cout << "Number is not Prime";
}
        
int main() {
    int n;
    cout << "Enter a Number: "; // Prompt the user to enter a number
    cin >> n; // Read the number from user input
    BrutePrime(n); // Call the brute force prime check function
    return 0; // End the program
}
