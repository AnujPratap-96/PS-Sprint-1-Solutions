#include <bits/stdc++.h>  // Includes all standard libraries in C++

using namespace std;

//* Brute Force Approach: Using Sorting
pair<int, int> Smallest_Largest(vector<int> arr) {
    // Sort the array in ascending order
    sort(arr.begin(), arr.end());
    // Return the smallest (first element) and largest (last element) in the sorted array
    return {arr[0], arr[arr.size() - 1]};
}

//? Optimal Approach: Single Pass to find smallest and largest elements
pair<int, int> Largest_Smallest(vector<int> arr) {
    // Initialize largest to a very small value and smallest to a very large value
    int largest = INT_MIN, smallest = INT_MAX;
    
    // Traverse the array
    for (int i = 0; i < arr.size(); i++) {
        // Update largest if current element is greater than the current largest
        if (arr[i] > largest) largest = arr[i];
        // Update smallest if current element is smaller than the current smallest
        if (arr[i] < smallest) smallest = arr[i];
    }
    
    // Return the smallest and largest elements found
    return {smallest, largest};
}

int main() {
    int n;  // Variable to store the size of the vector

    // Ask the user for the size of the vector
    cout << "Enter the size of Vector: ";
    cin >> n;  // Read input from the user

    // Declare a vector of size 'n'
    vector<int> arr(n);

    // Ask the user to enter the elements of the vector
    cout << "Enter the elements of Vector: ";
    for (int i = 0; i < n; i++) cin >> arr[i];  // Read the vector elements from the user

    // Output the elements of the vector
    cout << "Vector Elements are: ";
    for (auto &num : arr) cout << num << " ";  // Print each element in the vector
    cout << endl;

    // Call the brute force function to find the smallest and largest elements
    pair<int, int> brute_result = Smallest_Largest(arr);
    cout << "Brute Force -> Smallest Element: " << brute_result.first << ", Largest Element: " << brute_result.second << endl;

    // Call the optimal function to find the smallest and largest elements
    pair<int, int> optimal_result = Largest_Smallest(arr);
    cout << "Optimal -> Smallest Element: " << optimal_result.first << ", Largest Element: " << optimal_result.second << endl;

    return 0;  // Return 0 to indicate successful execution
}
