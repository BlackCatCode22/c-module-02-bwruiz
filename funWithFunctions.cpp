//
// Created by billw on 2/9/2025.
//
#include <iostream>
#include <limits> // Required for numeric_limits

using namespace std;

// Function to get an integer from the user with input validation
int getIntegerFromUser() {
    int num;

    while (true) {
        cout << "Enter an integer: ";
        if (cin >> num) {
            // Input was a valid integer, break out of the loop
            break;
        } else {
            // Input was not a valid integer.  Clear the error state and
            // discard the invalid input.
            cout << "Invalid input. Please enter an integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    return num;
}

// Function to compare two integers and return a descriptive string
string compareTwoIntegers(int a, int b) {
    if (a > b) {
        return "The first integer is greater than the second.";
    } else if (a < b) {
        return "The second integer is greater than the first.";
    } else {
        return "The two integers are equal.";
    }
}

// Function to sum two integers
int sumTwoIntegers(int a, int b) {
    return a + b;
}

int main() {
    // Get two integers from the user
    int num1 = getIntegerFromUser();
    int num2 = getIntegerFromUser();

    // Compare the inputs
    string comparisonResult = compareTwoIntegers(num1, num2);
    cout << comparisonResult << endl;

    // Sum the two integers and print the result
    int sum = sumTwoIntegers(num1, num2);
    cout << "The sum of the two integers is: " << sum << endl;

    return 0;
}