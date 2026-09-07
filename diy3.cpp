#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Enter full name: ";
    getline(cin, name);

    int len = name.length();
    cout << "Length: " << len << endl;

    if (len > 10) {
        cout << "It is a long name." << endl;
    } else {
        cout << "It is not a long name." << endl;
    }

    return 0;
}