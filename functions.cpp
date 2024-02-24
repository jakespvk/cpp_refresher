#include <iostream>
using namespace std;

void myFunction(string input = "default") {
    cout << "we're inside a function " << input << endl;
}

int main() {
    myFunction();
    myFunction("hello");

    return 0;
}
