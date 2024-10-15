//? Bubble Sort :: Push the maximum element to the last by adjacent swapping.
//* Time Complexity -> O(n^2) for average and worst case.
//? O(n) for the best case when the array is already sorted.
//! Space Complexity -> O(1) as it sorts the array in place.

#include <iostream>  // Include the standard input/output stream library
#include <vector>   // Include the vector library

using namespace std;

// Function to perform Bubble Sort on the given array
void BubbleSort(vector<int>& arr) {
    bool isSorted;  // Flag to track if the array is sorted
    int n = arr.size();  // Get the size of the array
    
    // Loop through the array from the last element to the first
    for (int i = n - 1; i >= 0; i--) {
        isSorted = true;  // Assume the array is sorted initially
        
        // Compare adjacent elements in the unsorted portion of the array
        for (int j = 0; j < i; j++) {
            // If the current element is greater than the next element, swap them
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);  // Swap the elements
                isSorted = false;  // Set the flag to false since a swap occurred
            }
        }
        // If no swaps were made, the array is sorted, and we can exit early
        if (isSorted) return;
    }
}

int main() {
    int n;  // Variable to store the size of the array
    cout << "Enter the size of array: ";  // Prompt user for input
    cin >> n;  // Read the size of the array
    
    vector<int> arr(n);  // Declare a vector of size n
    cout << "Enter elements in the array: ";  // Prompt user to input elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Read each element into the array
    }
    
    // Call the BubbleSort function to sort the array
    BubbleSort(arr);
    
    cout << "Sorted array: ";  // Display sorted array
    for (const int& elem : arr) {
        cout << elem << " ";  // Print each element of the sorted array
    }
    
    return 0;  // Return 0 to indicate successful execution
}
