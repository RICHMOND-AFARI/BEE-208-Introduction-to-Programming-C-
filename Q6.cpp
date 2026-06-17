#include<iostream>

using namespace std;

main() {
    char q;
    cout << "Enter a character: ";
    cin >> q;

    if (isupper(q)) {
        cout << "Uppercase letter";
    } else {
        cout << "Not an uppercase letter";
    }

    return 0;
}
	
