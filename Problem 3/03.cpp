#include<bits/stdc++.h>

using namespace std;

// Function to check if a given year is a leap year
void LeapYear(int n) {
    // Condition to check if the year is a leap year:
    // - It must be divisible by 4 and not divisible by 100
    // - OR it must be divisible by 400
    if(n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {
        cout << "The year " << n << " is a leap year."; // If the condition is met, it's a leap year
    } else {
        cout << "The year " << n << " is not a leap year."; // If the condition is not met, it's not a leap year
    }
}

int main() {
    int n;
    cout << "Enter a year: "; // Prompt user to enter a year
    cin >> n; // Read user input
    LeapYear(n); // Call the LeapYear function to check if the year is a leap year
    return 0; // End the program
}
