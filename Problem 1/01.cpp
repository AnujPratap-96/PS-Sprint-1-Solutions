#include<bits/stdc++.h> // Including all standard libraries in one header file

using namespace std; // Using the standard namespace to avoid writing 'std::' before every standard function

int main() {
    
    int n; // Variable to store the input number
    cout << "Enter a number" << endl; // Prompt the user to enter a number
    cin >> n; // Take the input number from the user
    
    // Check if the number is even or odd
    if (n % 2 == 0) // If the remainder when n is divided by 2 is 0, the number is even
        cout << "Given Number is Even"; // Output for even number
    else
        cout << "Given Number is Odd"; // Output for odd number
    
    return 0; // Return 0 to indicate successful execution
}
