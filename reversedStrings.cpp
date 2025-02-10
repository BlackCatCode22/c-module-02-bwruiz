#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string userInput;

    cout << "Enter a string: ";
    getline(cin, userInput);

    ranges::reverse(userInput);

    cout << "Reversed string: " << userInput << endl;

    return 0;
}