//
// Created by billw on 2/9/2025.
//
#include <iostream>
#include <limits>
using namespace std;
int getInteger() {
    int num;
    while (true) {
        cout << "Enter an integer: ";
        if (cin >> num) {
            break;
        } else {
            cout << "Invalid input. Please enter an integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    return num;
}

int main() {
    int num1 = getInteger();
    int num2 = getInteger();
    int num3 = getInteger();

    int largest = num1; // Initialize largest to the first number

    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }

    cout << "The largest integer is: " << largest << endl;
    return 0;
}