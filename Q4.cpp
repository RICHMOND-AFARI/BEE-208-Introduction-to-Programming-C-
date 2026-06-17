#include <iostream>
#include <string>
using namespace std;

main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (input == "hello") {
        cout << "Hello!";
    } else {
        cout << "Goodbye!";
    }

    return 0;
}

