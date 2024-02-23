#include <iostream>
#include <string>
using namespace std;

int main() {
    struct {
        int myNum;
        string myString;
    } myStructure;

    myStructure.myNum = 5;

    cout << myStructure.myNum << endl;

    return 0;
}
