#include <bits/stdc++.h>

using namespace std;

// Function to check if a number is an Armstrong number
bool ArmStrong(int n) {
    int m = n;          // Store the original number
    int sum = 0;       // Initialize sum to 0
    
    // Loop to calculate the sum of cubes of digits
    while (m > 0) {
        int rem = m % 10; // Get the last digit
        sum += rem * rem * rem; // Add the cube of the digit to sum
        m /= 10;         // Remove the last digit
    }
    
    // Return true if the sum of cubes equals the original number
    return sum == n;
}

// Function to find all Armstrong numbers in a given range
vector<int> ArmstrongInRange(int start, int end) {
    vector<int> ans; // Vector to store Armstrong numbers
    
    // Loop through the specified range
    for (int i = start; i <= end; i++) {
        if (ArmStrong(i)) // Check if the number is an Armstrong number
            ans.push_back(i); // Add it to the result vector
    }
    return ans; // Return the vector of Armstrong numbers
}

int main() {
    int start, end;
    cout << "Enter the starting and ending of range: ";
    cin >> start >> end; // Read the range limits
    
    vector<int> ans = ArmstrongInRange(start, end); // Get Armstrong numbers in range
    cout << "Armstrong in the range: ";
    for (auto it : ans) 
        cout << it << " "; // Print the Armstrong numbers found
    
    return 0; // Return 0 to indicate successful execution
}
