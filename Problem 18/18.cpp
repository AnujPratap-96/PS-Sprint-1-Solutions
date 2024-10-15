#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; // Variable to store the number for which the multiplication table will be generated
    cout << "Enter a number to generate table: ";
    cin >> n; // Read the number from user input

    // Loop to generate and print the multiplication table
    for (int i = 1; i <= 10; i++) {
        cout << n << " * " << i << " = " << n * i << endl; // Print each line of the multiplication table
    }

    return 0; // Return 0 to indicate successful execution
}
