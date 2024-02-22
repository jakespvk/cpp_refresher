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

    // performance updates
    for (int i = 0; i < sizeof(cars)/sizeof(string); i++) {
        cout << cars[i] << endl;
    }

    return 0;
}
