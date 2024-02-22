#include <iostream>
#include <string>
using namespace std;

int main() {
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    int myNum[3] = {10, 20, 30};

    for (string car : cars) {
        cout << car << ' ';
    }
    cout << endl;
    for (int num : myNum) {
        cout << num << ' ';
    }
    cout << endl;

    return 0;
}
