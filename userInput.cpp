#include <iostream>
#include <string>
using namespace std;

int main() {
    /*
    string firstName;
    cout << "Type your first name: ";
    cin >> firstName;
    cout << "Your name is: " << firstName << endl;
    */

    string fullName;
    cout << "Type your full name: ";
    getline(cin, fullName);
    cout << "Your name is: " << fullName << endl;

    return 0;
}
