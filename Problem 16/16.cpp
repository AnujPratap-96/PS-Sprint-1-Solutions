#include <bits/stdc++.h> // Standard library for all C++ functionalities

using namespace std;

// Function to calculate the sum of array elements
// This is the optimal way to solve this problem, as it uses a single loop
int ArraySum(vector<int> arr) {
    int sum = 0; // Initialize sum to 0
    // Iterate through each element in the array using a range-based loop
    for (auto &num : arr) {
        sum += num; // Add each element to the sum
    }
    return sum; // Return the total sum
}

int main() {
    int n; // Declare a variable to hold the size of the array
    cout << "Enter the length of the array: ";
    cin >> n; // Take input for the array size

    // Declare a vector to hold the array elements
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    // Input the array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call the ArraySum function and display the sum of the elements
    cout << "Sum of array elements is: " << ArraySum(arr) << endl;

    return 0; // Return 0 to indicate successful execution
}
