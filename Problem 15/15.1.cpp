//? Merge Sort :: Divide the array and merge it .
//* Time Complexity -> O(N logN ) for all the cases.
//! Space Complexity -> O(N).


#include <bits/stdc++.h>

using namespace std;

// Function to merge two sorted subarrays in-place
void Merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> left(mid - low + 1);
    vector<int> right(high - mid);

    // Copy data to temporary arrays
    copy(arr.begin() + low, arr.begin() + mid + 1, left.begin());
    copy(arr.begin() + mid + 1, arr.begin() + high + 1, right.begin());

    int i = 0, j = 0, k = low;
    
    // Merge the temp arrays back into the original array
    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }

    // Copy the remaining elements of left[], if any
    while (i < left.size()) {
        arr[k++] = left[i++];
    }

    // Copy the remaining elements of right[], if any
    while (j < right.size()) {
        arr[k++] = right[j++];
    }
}

// Function to perform Merge Sort on the array
void MergeSort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        
        // Recursively sort the two halves
        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);
        
        // Merge the sorted halves
        Merge(arr, low, mid, high);
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Perform Merge Sort
    MergeSort(arr, 0, n - 1);
    
    // Print the sorted array
    cout << "Sorted array: ";
    for (const int& elem : arr) {
        cout << elem << " ";
    }
    
    return 0;
}
