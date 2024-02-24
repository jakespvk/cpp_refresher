#include <iostream>
#include <string>
using namespace std;

int main() {
    string food = "Pizza";
    string* ptr = &food;

    cout << ptr << endl;
    cout << *ptr << endl;
    
    return 0;
}
