#include <iostream>
#include <string>
using namespace std;
int main() {
    string name, usn, branch;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter USN: ";
    cin >> usn;
    cout << "Enter Branch: ";
    cin >> branch;

    cout << "\n*************************" << endl;
    cout << "* Name  : " << name << endl;
    cout << "* USN   : " << usn << endl;
    cout << "* Branch: " << branch << endl;
    cout << "*************************" << endl;

    return 0;
}   