#include <bits/stdc++.h>

using namespace std;

// Brute Force method to find the sum of even numbers in a given range
int EvenSumInRangeBrute(int start, int end) {
    int sum = 0; // Initialize sum to zero
    for (int i = start; i <= end; i++) { // Iterate through each number in the range
        if (i % 2 == 0) { // Check if the number is even
            sum += i; // Add to sum if even
        }
    }
    return sum; // Return the total sum of even numbers
}

// Optimal method to find the sum of even numbers in a given range
int EvenSumInRangeOptimal(int start, int end) {
    // Adjust the start to the next even number if it is odd
    if (start % 2 != 0) {
        start++;
    }
    // Adjust the end to the previous even number if it is odd
    if (end % 2 != 0) {
        end--;
    }
    // If start > end, return 0 as there are no even numbers in range
    if (start > end) {
        return 0;
    }
    
    // Number of even numbers in the range
    int n = (end - start) / 2 + 1; 
    // Sum of first n even numbers: n * (first even number + last even number) / 2
    return n * (start + end) / 2;
}

int main() {
    int start, end;
    cout << "Enter the starting and ending ranges: ";
    cin >> start >> end;

    // Call and display results for brute force method
    cout << "Sum of Even Numbers between Range " << start << " to " << end << " (Brute Force Method): " 
         << EvenSumInRangeBrute(start, end) << endl;

    // Call and display results for optimal method
    cout << "Sum of Even Numbers between Range " << start << " to " << end << " (Optimal Method): " 
         << EvenSumInRangeOptimal(start, end) << endl;

    return 0; // Indicate successful execution
}
