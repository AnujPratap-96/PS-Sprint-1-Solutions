#include <bits/stdc++.h>
using namespace std;

// Function to calculate the sum of odd numbers in the given range (brute force approach)
int OddSumInRangeBrute(int start, int end) {
    int sum = 0;  // Initialize sum to 0
    for (int i = start; i <= end; i++) {  // Loop through each number in the range
        if (i % 2 == 1)  // Check if the number is odd
            sum += i;   // Add the odd number to the sum
    }
    return sum;  // Return the total sum of odd numbers
}

// Function to calculate the sum of odd numbers in the given range (optimal approach)
int OddSumInRangeOptimal(int start, int end) {
    // Adjust the starting point to the nearest odd number
    if (start % 2 == 0) 
        start++;  // If start is even, increment to make it odd

    // Adjust the ending point to the nearest odd number
    if (end % 2 == 0) 
        end--;  // If end is even, decrement to make it odd

    // If start is greater than end after adjustments, return 0
    if (start > end) 
        return 0;

    // Calculate the number of odd terms in the series
    int n = (end - start) / 2 + 1;  // Total odd numbers from start to end
    // Using the formula for the sum of an arithmetic series: Sum = n/2 * (first term + last term)
    return n * (start + end) / 2;  // Return the sum
}

int main() {
    int start, end;  // Declare variables for the range
    cout << "Enter the starting and ending ranges: ";
    cin >> start >> end;  // Input range

    // Call brute force method
    cout << "Sum of Odd Numbers between Range " << start << " to " << end << " (Brute Force) is: " 
         << OddSumInRangeBrute(start, end) << endl;

    // Call optimal method
    cout << "Sum of Odd Numbers between Range " << start << " to " << end << " (Optimal) is: " 
         << OddSumInRangeOptimal(start, end) << endl;

    return 0;  // Indicate successful execution
}
