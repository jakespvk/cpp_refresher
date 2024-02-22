#include <iostream>
#include <string>
using namespace std;

int main() {
    int myNum = 50;
    string greeting = "Hello";
    string firstName = "Jake";
    string lastName = "Spievak";
    string fullName = firstName + ' ' + lastName;
    string fullName2 = firstName.append(' ' + lastName);
    string vikings = "We are the so-called \"Vikings\" from the north.";

    cout << "My number is: " << myNum << endl;
    cout << greeting << endl;
    cout << "My name is " << fullName << endl;
    cout << "My name is " << fullName2 << endl;
    cout << vikings << endl;
    return 0;
}
